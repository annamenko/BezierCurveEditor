#include "include/mainwindow.hpp"
#include "ui_mainwindow.h"
#include <QList>
#include <QPainterPath>
#include <QMouseEvent>
#include <QColorDialog>
#include <QFileDialog>
#include <typeinfo>
#include <QJsonObject>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    InitialGraphicView();
    CreateConnects();
    setMouseTracking(true);
    moveMode();
    this->setWindowTitle("BezierEditor");
    ui->comboBox->setPlaceholderText("size");
    ui->comboBox->setCurrentIndex(-1);
}

MainWindow::~MainWindow()
{
    sceneGraphicsItems.clear();
    delete swButton;
    delete swLabel;
    delete undoAction;
    delete undoStack;
    delete ui;
}

void MainWindow::InitialGraphicView()
{    
    swLabel = new QLabel(tr("Hide mode"), this);
    swLabel->setMaximumWidth(60);
    swButton = new SwitchButton(this);
    setMinimumSize(QSize(640, 480));
    scene.setSceneRect(0, 0, 750, 450);

    ui->graphicsView->setScene(&scene);
    ui->graphicsView->setBackgroundBrush(QBrush(Qt::white, Qt::SolidPattern));
    ui->horizontalLayout_2->insertWidget(0, swButton);
    ui->horizontalLayout_2->insertWidget(1, swLabel);
    ui->comboBoxModes->addItem(tr("Move"));
    ui->comboBoxModes->addItem(tr("Drag"));
}

void MainWindow::CreateConnects()
{
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::onClearScene);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::onAssign);
    connect(swButton, SIGNAL(clicked(bool)), this, SLOT(onClicked(bool)));
    connect(ui->pushButton_6, &QPushButton::clicked, this, &MainWindow::increaseControlItemSize);
    connect(ui->pushButton_7, &QPushButton::clicked, this, &MainWindow::reduceControlItemSize);
    connect(ui->actionExit, &QAction::triggered, this, &MainWindow::close);
    connect(ui->actionSave, &QAction::triggered, this, &MainWindow::saveScene);
    connect(ui->actionOpen, &QAction::triggered, this, &MainWindow::onOpenScene);
    connect(ui->actionSaveJson, &QAction::triggered, this, &MainWindow::onSaveAsJson);
    connect(ui->pushButton_5, &QPushButton::clicked, this, &MainWindow::onChangeColor);
    connect(ui->comboBoxModes, &QComboBox::currentIndexChanged, this, &MainWindow::onModeChanged);
    connect(ui->horizontalSlider, &QSlider::sliderMoved, this, &MainWindow::onValueChanged);

    undoStack = new QUndoStack();
    undoAction = undoStack->createUndoAction(this, tr("&Undo"));;
    undoAction->setShortcut(QKeySequence::Undo);
    undoAction->setShortcutContext(Qt::ShortcutContext::ApplicationShortcut);

    redoAction = undoStack->createRedoAction(this, tr("&Redo"));
    redoAction->setShortcut(QKeySequence::Redo);
    redoAction->setShortcutContext(Qt::ShortcutContext::ApplicationShortcut);

    connect(ui->pushButton_3, &QPushButton::clicked, this, [&]() {undoAction->trigger();} );
    connect(ui->pushButton_4, &QPushButton::clicked, this, [&]() {redoAction->trigger();} );
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    QString pos = QString("Mouse posistion on graphic view - ") + "X : " + QString::number(event->pos().x()) + " | Y : " + QString::number(event->pos().y());
    ui->statusbar->showMessage(pos);
    QMainWindow::mouseMoveEvent(event);
}

void MainWindow::addOnSceneObjects(GraphicsPainter *painter)
{
    scene.addItem(painter);
    scene.update();
}

ControlItem *MainWindow::createControlItems(GraphicsPainter *painter, QPoint &pos, ItemPosition isInside)
{
    ControlItem *item = new ControlItem(painter, isInside);
    item->setScenePos(pos);

    //          КОСТЫЛЬ инвалида группы F
    connect(item, &ControlItem::changedsceneposoutside1, painter, &GraphicsPainter::onchangedsceneposoutside1);
    connect(item, &ControlItem::changedsceneposoutside4, painter, &GraphicsPainter::onchangedsceneposoutside4);
    connect(item, &ControlItem::changedsceneposinside2, painter, &GraphicsPainter::onchangedsceneposinside2);
    connect(item, &ControlItem::changedsceneposinside3, painter, &GraphicsPainter::onchangedsceneposinside3);

    connect(item, &ControlItem::mousepressedoldpos, this, [&](const QPoint& pos)
    {
        tempoldPos = pos;
    });

    connect(item, &ControlItem::mousereleasednewpos, this, &MainWindow::onItemMoved);
    return item;
}

QVector<ControlItem *> MainWindow::createSceneGraphicsItems(GraphicsPainter *painter)
{
    auto dots = painter->getDots1();
    auto dots4 = painter->getDots4();

    auto dots2 = painter->getDots2();
    auto dots3 = painter->getDots3();
    QVector<ControlItem *> items;
    std::for_each(dots.begin(), dots.end(), [&](QPoint &x)
    {
        items.push_back(createControlItems(painter, x, ItemPosition::Outside1));
    });

    std::for_each(dots4.begin(), dots4.end(), [&](QPoint &x)
    {
        items.push_back(createControlItems(painter, x, ItemPosition::Outside2));
    });

    std::for_each(dots2.begin(), dots2.end(), [&](QPoint &x)
    {
        items.push_back(createControlItems(painter, x, ItemPosition::Inside1));
    });

    std::for_each(dots3.begin(), dots3.end(), [&](QPoint &x)
    {
        items.push_back(createControlItems(painter, x, ItemPosition::Inside2));
    });

    addOnSceneObjects(painter);
    ControlItem::GetStaticIndex1() = 0;
    ControlItem::GetStaticIndex4() = 0;
    ControlItem::GetStaticInsideIndex2() = 0;
    ControlItem::GetStaticInsideIndex3() = 0;

    return items;
}

/*       On Assign Button pressed     */

void MainWindow::onAssign()
{
    // Получаем текс с line edit
    QString text = ui->lineEdit->text();
    if (text.isEmpty())
    {
        return;
    }

    auto color = QColor(0, 0, 0);

/* ----------------- Вот этот кусок сам объяснишь -------------------- */
    QPoint point = QPoint(0, 0);

    for (auto& letter : text)
    {
        qint8 letterChar = letter.toLatin1();

        if (letterChar == ' '){
           point = QPoint(point.x() + 40, 0);
           continue;
        }
/* ------------------------------------------------------------------- */

        // Создаем painter в котором заранее заданы координаты букв
        GraphicsPainter *painter = LettersFactory::GetLetter(letterChar, point);
        painter->setFlag(QGraphicsItem::ItemIsSelectable);
        connect(painter, &GraphicsPainter::selected, this, &MainWindow::onPressedItem);

        /*
         *                  Добавляем в словарь пейнтер и вектор из controlitem'ов
         *                  Они не агригированы в GraphicsPainter, поскольку нужно их еще рисовать на сцене
         *                  А передавать сцену или делать коннект с дополнительными слотами и сигналами мама не позволяет :c
         *                  (Просто это будет не очень)
         */

        if (painter)
        {
            sceneGraphicsItems.insert(painter, createSceneGraphicsItems(painter));
            painter->setColorFilling(color);
            onModeChanged(ui->comboBoxModes->currentIndex());
        }
    }
}

void MainWindow::onClearScene()
{
    GraphicsPainter::getIndex() = 0;
    ControlItem::GetStaticInsideIndex2() = 0;
    ControlItem::GetStaticInsideIndex3() = 0;
    ControlItem::GetStaticIndex1() = 0;
    ControlItem::GetStaticIndex4() = 0;
    sceneGraphicsItems.clear();
    scene.clear();
    scene.update();
}

void MainWindow::onItemMoved(const QPoint, ControlItem *item)
{
    undoStack->push(new MoveCommand(item, tempoldPos));
}

void MainWindow::onClicked(bool mode)
{
   auto listofList = sceneGraphicsItems.values();
   for (auto &list1 : listofList)
   {
       for (auto && elem : list1)
       {
           mode ? elem->hide() : elem->show();
       }
   }
}

void MainWindow::increaseControlItemSize()
{
    if (swButton->isChecked())
    {
        return;
    }
    auto listofList = sceneGraphicsItems.values();
    for (auto &list1 : listofList)
    {
        for (auto && elem : list1)
        {
            elem->setSize(elem->getSize() + 1);
        }
    }
}

void MainWindow::reduceControlItemSize()
{
    if (swButton->isChecked())
    {
        return;
    }
    auto listofList = sceneGraphicsItems.values();
    for (auto &list1 : listofList)
    {
        for (auto && elem : list1)
        {
            quint32 size = elem->getSize();
            elem->setSize(size ? size - 1 : size);
        }
    }
}

void MainWindow::saveScene()
{
    onClicked(true);
    QString fDialog = QFileDialog::getSaveFileName(this, tr("Save image"), "test.png", tr("Image Files(*.png)"));
    QPixmap pMap = ui->graphicsView->grab(ui->graphicsView->sceneRect().toRect());
    pMap.save(fDialog);
    onClicked(false);
}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
   QMap<GraphicsPainter *, QVector<ControlItem *>>::iterator it = sceneGraphicsItems.begin();
   for (;it != sceneGraphicsItems.end(); it++){
       it.key()->updatePoint(index);
       for (int i = 0; i < it.value().size(); i++ ){
           delete it.value()[i];
       }
       it.value().clear();
       it.value() = createSceneGraphicsItems(it.key());
   }
   scene.update();
}

void MainWindow::onPressedItem(QGraphicsItem *item)
{
    if (!item) return;
    ui->horizontalSlider->setValue(item->rotation());
    oldSliderValue = item->rotation();
}

void MainWindow::defaultState()
{
    if (!swButton->isChecked())
        onClicked(false);

    auto listOfListKeys = sceneGraphicsItems.keys();
    for (auto it = listOfListKeys.begin(); it != listOfListKeys.end(); ++it)
    {
        (*it)->setEnabled(true);
    }

    ui->horizontalSlider->setEnabled(true);
    swButton->setEnabled(true);
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->comboBox->setEnabled(true);

    auto listOfList = sceneGraphicsItems.values();
    for (auto it = listOfList.begin(); it != listOfList.end(); ++it)
    {
        for (auto it2 = it->begin(); it2 != it->end(); ++it2)
        {
            (*it2)->setEnabled(true);
        }
    }
}

void MainWindow::moveMode()
{
    onClicked(true);
    swButton->setEnabled(false);

    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->comboBox->setEnabled(false);

    auto listOfList = sceneGraphicsItems.values();
    for (auto it = listOfList.begin(); it != listOfList.end(); ++it)
    {
        for (auto it2 = it->begin(); it2 != it->end(); ++it2)
        {
            (*it2)->setEnabled(false);
        }
    }
}

void MainWindow::dragMode()
{
    ui->horizontalSlider->setEnabled(false);
    auto listOfList = sceneGraphicsItems.keys();
    for (auto it = listOfList.begin(); it != listOfList.end(); ++it)
    {
        (*it)->setEnabled(false);
        auto cItems = (*it)->childItems();
        for (auto it2 = cItems.begin(); it2 != cItems.end(); ++it2)
        {
            (*it2)->setEnabled(true);
        }
    }
}

void MainWindow::onOpenScene()
{
    onClearScene();
    QString fDialog = QFileDialog::getOpenFileName(this, tr("Open file"), nullptr, tr("JSON Files (*.json)"));

    if (fDialog.isEmpty()) return;
    QJsonObject jsonObject = LettersFactory::GetJsonFromFile(fDialog);

    QJsonArray objectsOnScene = jsonObject["object-on-scene"].toArray();
    for (const QJsonValue& painter : objectsOnScene)
    {
        GraphicsPainter *paint = new GraphicsPainter();
        QColor color = painter["color"].toString();
        paint->setColorFilling(color);

        QJsonArray polygon1 = painter["polygon1"].toArray();
        QJsonArray polygon2 = painter["polygon2"].toArray();
        QJsonArray polygon3 = painter["polygon3"].toArray();
        QJsonArray polygon4 = painter["polygon4"].toArray();

        QVector<QPoint> points1;
        QVector<QPoint> points2;
        QVector<QPoint> points3;
        QVector<QPoint> points4;

        for (const QJsonValue& value : polygon1)
        {
            QStringList positionStr = value.toString().split(" ");
            QPoint pos = QPoint(positionStr[0].toInt(), positionStr[1].toInt());
            points1.append(pos);
        }

        for (const QJsonValue& value : polygon2)
        {
            QStringList positionStr = value.toString().split(" ");
            QPoint pos = QPoint(positionStr[0].toInt(), positionStr[1].toInt());
            points2.append(pos);
        }

        for (const QJsonValue& value : polygon3)
        {
            QStringList positionStr = value.toString().split(" ");
            QPoint pos = QPoint(positionStr[0].toInt(), positionStr[1].toInt());
            points3.append(pos);
        }

        for (const QJsonValue& value : polygon4)
        {
            QStringList positionStr = value.toString().split(" ");
            QPoint pos = QPoint(positionStr[0].toInt(), positionStr[1].toInt());
            points4.append(pos);
        }

        paint->setDots1(points1);
        paint->setDots2(points2);
        paint->setDots3(points3);
        paint->setDots4(points4);

        connect(paint, &GraphicsPainter::selected, this, &MainWindow::onPressedItem);
        sceneGraphicsItems.insert(paint, createSceneGraphicsItems(paint));
        onModeChanged(ui->comboBoxModes->currentIndex());
    }
}

void MainWindow::onSaveAsJson()
{
    QString fDialog = QFileDialog::getSaveFileName(this, tr("Save JSON"), "test.json", tr("JSON Files(*.json)"));

    if (fDialog.isEmpty()) return;

    auto object = JsonHandler::WriteJson(sceneGraphicsItems);

    LettersFactory::SaveJsonToFile(fDialog, object);

}

void MainWindow::onChangeColor()
{
    auto color = QColorDialog::getColor();
    QList<QGraphicsItem *> items = scene.selectedItems();

    qDebug() << items.length();
    for (auto &item : items)
    {
        dynamic_cast<GraphicsPainter *>(item)->setColorFilling(color);
    }
}

void MainWindow::onModeChanged(int index)
{
    defaultState();
    switch (index) {
    case 0:
        moveMode();
        break;
    case 1:
        dragMode();
        break;
    }
}

void MainWindow::onValueChanged(int value)
{
    if (scene.selectedItems().isEmpty()) return;

    QRectF rect;
    QGraphicsItem *item = scene.selectedItems().at(0);
    rect |= item->mapToScene(item->boundingRect()).boundingRect();

    ui->horizontalSlider->setValue(item->rotation());

    QPointF center = rect.center();
    qreal angle = value - oldSliderValue;

    oldSliderValue = value;
    QTransform t;
    t.translate(center.x(), center.y());
    t.rotate(angle);
    t.translate(-center.x(), -center.y());

    item->setPos(t.map(item->pos()));
    item->setRotation(item->rotation() + angle);

    scene.update();
}
