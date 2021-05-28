#include "../include/graphicspainter.hpp"
#include <QPaintEvent>
#include <QPainter>
#include <algorithm>
#include <QCursor>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsScene>


/* Comment to not drawing bouding rect */
/* *********************************** */
//#define DRAWRECT
/* *********************************** */

quint32 GraphicsPainter::index = 0;

GraphicsPainter::GraphicsPainter(QColor fill, QColor insideFill, QGraphicsItem *parent)
    : colorFill(fill), colorFillInside(insideFill)
{
    Q_UNUSED(parent);
    setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable);
    setAcceptHoverEvents(true);
    setAcceptedMouseButtons(Qt::MouseButton::LeftButton);
    setCursor(QCursor(Qt::PointingHandCursor));
    currentIndex = index++;
}

GraphicsPainter::~GraphicsPainter()
{
    pointDots2.clear();
    pointDots1.clear();
    poly1.clear();
    poly2.clear();
}

void GraphicsPainter::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option)
    Q_UNUSED(widget)

    painter->setRenderHints(QPainter::Antialiasing);
    painter->setPen(QPen(colorFill, 2));
    painter->setBrush(colorFill);

    painter->drawPath(poly1.GetPath());
    painter->drawPath(poly4.GetPath());

    painter->setPen(QPen(colorFillInside, 2));
    painter->setBrush(colorFillInside);

    painter->drawPath(poly2.GetPath());
    painter->drawPath(poly3.GetPath());

    if (isSelected())
    {
        painter->setPen(QPen(Qt::black, 2));
        painter->setBrush(Qt::NoBrush);
        painter->drawRect(boundingRect());
    }
}

QRectF GraphicsPainter::boundingRect() const
{
    return rect;
}

QList<QPoint> GraphicsPainter::getDots1()
{
    return pointDots1;
}

QList<QPoint> GraphicsPainter::getDots2()
{
    return pointDots2;
}

QList<QPoint> GraphicsPainter::getDots3()
{
    return pointDots3;
}

QList<QPoint> GraphicsPainter::getDots4()
{
    return pointDots4;
}

void GraphicsPainter::setDots1(QVector<QPoint> &dots)
{
    pointDots1 = dots;
    update();
}

void GraphicsPainter::setDots2(QVector<QPoint> &dots)
{
    pointDots2 = dots;
    update();
}

void GraphicsPainter::setDots3(QVector<QPoint> &dots)
{
    pointDots3 = dots;
    update();
}

void GraphicsPainter::setDots4(QVector<QPoint> &dots)
{
    pointDots4 = dots;
    update();
}

void GraphicsPainter::setColorFilling(QColor &rgb)
{
    colorFill = rgb;
    update();
}

void GraphicsPainter::setColorFillingInside(QColor &rgb)
{
    colorFillInside = rgb;
    update();
}

void GraphicsPainter::addControls1(const QPoint point)
{
    pointDots1.append(point);
    update();
}

void GraphicsPainter::addControls2(const QPoint point)
{
    pointDots2.append(point);
    update();
}

void GraphicsPainter::addControls3(const QPoint point)
{
    pointDots3.append(point);
    update();
}

void GraphicsPainter::addControls4(const QPoint point)
{
    pointDots4.append(point);
    update();
}

void GraphicsPainter::updatePoint(int newSize)
{
    float letterSizeNew = getSize(newSize);
    float letterSize = getSize(size);
    size = newSize;
    for (auto& elem : pointDots1){
        elem.setX(int(elem.x()/letterSize));
        elem.setX(int(elem.x()*letterSizeNew));
        elem.setY(int(elem.y()/letterSize));
        elem.setY(int(elem.y()*letterSizeNew));
    }

    for (auto& elem : pointDots2){
        elem.setX(int(elem.x()/letterSize));
        elem.setX(int(elem.x()*letterSizeNew));
        elem.setY(int(elem.y()/letterSize));
        elem.setY(int(elem.y()*letterSizeNew));
    }

    for (auto& elem : pointDots3){
        elem.setX(int(elem.x()/letterSize));
        elem.setX(int(elem.x()*letterSizeNew));
        elem.setY(int(elem.y()/letterSize));
        elem.setY(int(elem.y()*letterSizeNew));
    }

    for (auto& elem : pointDots4){
        elem.setX(int(elem.x()/letterSize));
        elem.setX(int(elem.x()*letterSizeNew));
        elem.setY(int(elem.y()/letterSize));
        elem.setY(int(elem.y()*letterSizeNew));
    }

    update();
}

void GraphicsPainter::setControl1(quint32 ind, const QPoint& point)
{
    pointDots1[ind] = point;
    update();
}

void GraphicsPainter::setControl2(quint32 ind, const QPoint &point)
{
    pointDots2[ind] = point;
    update();
}

void GraphicsPainter::setControl3(quint32 ind, const QPoint &point)
{
    pointDots3[ind] = point;
    update();
}

void GraphicsPainter::setControl4(quint32 ind, const QPoint &point)
{
    pointDots4[ind] = point;
    update();
}

void GraphicsPainter::onchangedsceneposoutside1(int index, const QPoint& pos)
{
    setControl1(index, pos);
}

void GraphicsPainter::onchangedsceneposoutside4(int index, const QPoint &pos)
{
    setControl4(index, pos);
}

void GraphicsPainter::onchangedsceneposinside2(int index, const QPoint &pos)
{
    setControl2(index, pos);
}

void GraphicsPainter::onchangedsceneposinside3(int index, const QPoint &pos)
{
    setControl3(index, pos);
}

float GraphicsPainter::getSize(int size)
{
    switch (size) {
    case 0:
        return 1;
    case 1:
        return 2;
    case 2:
        return 3;
    case 3:
        return 4;
    case 4:
        return 5;
    case 5:
        return 6;
    default:
        return 1;
    }
}

quint32 &GraphicsPainter::getIndex()
{
    return index;
}

int GraphicsPainter::getCurrentIndex() const
{
    return currentIndex;
}

QColor GraphicsPainter::getColorFill()
{
    return colorFill;
}

void GraphicsPainter::update()
{
    if (pointDots1.isEmpty())
        return;
    QPoint min = pointDots1.at(0);
    QPoint max = pointDots1.at(0);

    poly1.clear();
    poly2.clear();
    poly3.clear();
    poly4.clear();

    foreach(auto &x, pointDots1)
    {
        /*
         *        Need to Fix
         */
        if (min.x() > x.x()) min.setX(x.x());
        if (max.y() < x.y()) max.setY(x.y());
        if (max.x() < x.x()) max.setX(x.x());
        if (min.y() > x.x()) min.setY(x.y());
        poly1 << x;
    }

    foreach(auto &x, pointDots2)
    {
        poly2 << x;
    }

    foreach (auto &x, pointDots3)
    {
        poly3 << x;
    }

    foreach (auto &x, pointDots4)
    {
        /* Здесь так же надо будет сделать min max */

        poly4 << x;
    }

    rect.setRect(min.x(), max.y(), max.x() - min.x(), min.y() - max.y());
    QGraphicsItem::update();
}

#include <QGraphicsScene>
void GraphicsPainter::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    auto items = scene()->selectedItems();
    setSelected(true);
    std::for_each(items.begin(), items.end(), [&](QGraphicsItem *item)
    {
       item->setSelected(false);
    });
    setCursor(Qt::ClosedHandCursor);
    update();
    scene()->update();
    QGraphicsItem::mousePressEvent(event);
}

void GraphicsPainter::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    setPos(mapToScene(event->pos()) - boundingRect().center());
    update();
    scene()->update();
}

void GraphicsPainter::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    Q_UNUSED(event);
    setCursor(Qt::OpenHandCursor);
    update();
}

void GraphicsPainter::hoverEnterEvent(QGraphicsSceneHoverEvent *event)
{
    Q_UNUSED(event);
    setCursor(Qt::OpenHandCursor);
}

void GraphicsPainter::hoverLeaveEvent(QGraphicsSceneHoverEvent *event)
{
    setCursor(Qt::ArrowCursor);
    QGraphicsItem::hoverLeaveEvent(event);
}


QVariant GraphicsPainter::itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant &value)
{
    if (change == QGraphicsItem::ItemSelectedChange)
    {
        if (value == true)
        {
            emit selected(this);
        }
    }
    return QGraphicsItem::itemChange(change, value);
}
