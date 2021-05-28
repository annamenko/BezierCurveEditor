#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QAction>
#include <QUndoStack>
#include <QPair>

#include "controlitem.hpp"
#include "graphicspainter.hpp"
#include "LetterMacros.hpp"
#include "movecommand.hpp"
#include "switchbutton.hpp"
#include "jsonhandler.hpp"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void InitialGraphicView();
    void SetAttachment();
    void CreateConnects();
    void mouseMoveEvent(QMouseEvent *event) override;

public slots:
    void onAssign();
    void onClearScene();
    void onItemMoved(const QPoint pos, ControlItem *item);
    void onClicked(bool mode);
    void increaseControlItemSize();
    void reduceControlItemSize();
    void saveScene();
    void onOpenScene();
    void onSaveAsJson();
    void onChangeColor();
    void onModeChanged(int index);
    void onValueChanged(int value);

private slots:
    void on_comboBox_currentIndexChanged(int index);
    void onPressedItem(QGraphicsItem *item);

private:

    void defaultState();
    void moveMode();
    void dragMode();
    void rotateMode();

    void addOnSceneObjects(GraphicsPainter *painter);
    QVector<ControlItem *> createSceneGraphicsItems(GraphicsPainter *painter);
    ControlItem *createControlItems(GraphicsPainter *painter, QPoint &pos, ItemPosition isInside);

private:
    QGraphicsScene scene;

    QAction *undoAction = nullptr;
    QAction *redoAction = nullptr;
    QUndoStack *undoStack = nullptr;

    QLabel *swLabel = nullptr;
    SwitchButton *swButton = nullptr;

    QMap<GraphicsPainter *, QVector<ControlItem *>> sceneGraphicsItems;
    Ui::MainWindow *ui;

    qint32 oldSliderValue;
    QPoint tempoldPos;
};
#endif // MAINWINDOW_HPP
