#include "../include/controlitem.hpp"

#include <QPainter>
#include <QPoint>
#include <QCursor>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsScene>

const int ControlItem::DEFAULT_SIZE = 2;

int ControlItem::index1 = 0;
int ControlItem::index4 = 0;
int ControlItem::indexInside2 = 0;
int ControlItem::indexInside3 = 0;

//#define DRAWRECTCI

ControlItem::ControlItem() :
                        ControlItem(0, ItemPosition::None)
{
}

ControlItem::ControlItem(GraphicsPainter *parent, ItemPosition position) :
                                        ControlItem(parent, DEFAULT_SIZE, position)
{
}

ControlItem::ControlItem(GraphicsPainter *parent, int size, ItemPosition position) :
                                        QGraphicsItem(parent),
                                        isInside(position),
                                        size(size),
                                        pen(Qt::gray, 2, Qt::SolidLine, Qt::RoundCap)
{
    oldSize = DEFAULT_SIZE;
    parentGraphics = parent;
    setAcceptHoverEvents(true);
    setAcceptedMouseButtons(Qt::MouseButton::LeftButton);
    setCursor(QCursor(Qt::PointingHandCursor));

    switch (isInside) {
    case ItemPosition::Inside1:
        currentindexInside2 = indexInside2++;
        break;
    case ItemPosition::Inside2:
        currentindexInside3 = indexInside3++;
        break;
    case ItemPosition::Outside1:
        currentindex1 = index1++;
        break;
    case ItemPosition::Outside2:
        currentindex4 = index4++;
        break;
    case ItemPosition::None:
        break;
    }
}

QRectF ControlItem::boundingRect() const
{
    int realSize = size + pen.width();
    return QRectF(-realSize, -realSize, 2 * realSize, 2 * realSize);
}

void ControlItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    painter->setRenderHint(QPainter::Antialiasing);
    painter->setPen(pen);
    painter->drawEllipse(QPoint(0,0), size, size);

#ifdef DRAWRECTCI
    painter->setPen(QPen(Qt::black, 1));
    painter->setBrush(Qt::NoBrush);
    painter->drawRect(boundingRect());
#endif
}

void ControlItem::hoverEnterEvent(QGraphicsSceneHoverEvent *)
{
    pen.setColor(Qt::red);
    update();
}

void ControlItem::hoverLeaveEvent(QGraphicsSceneHoverEvent *)
{
    pen.setColor(Qt::gray);
    update();
}

void ControlItem::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    QPoint pos = mapToParent(event->pos()).toPoint();
    setPos(pos);
    update();
    scene()->update();
    switch (isInside) {
    case ItemPosition::Inside1:
        emit changedsceneposinside2(currentindexInside2, pos);
        break;
    case ItemPosition::Inside2:
        emit changedsceneposinside3(currentindexInside3, pos);
        break;
    case ItemPosition::Outside1:
        qDebug() << currentindex1;
        emit changedsceneposoutside1(currentindex1, pos);
        break;
    case ItemPosition::Outside2:
        qDebug() << currentindex4;
        emit changedsceneposoutside4(currentindex4, pos);
        break;
    case ItemPosition::None:
        break;
    }

}

void ControlItem::mousePressEvent(QGraphicsSceneMouseEvent *)
{
    update();
    emit mousepressedoldpos(getScenePos());
}

void ControlItem::mouseReleaseEvent(QGraphicsSceneMouseEvent *)
{
    update();

    qDebug() << mapToScene(pos()).toPoint() << "-" << pos().toPoint() << "=" << mapToScene(pos()).toPoint() - pos().toPoint();

    //emit mousereleasednewpos(getScenePos(), this);
}

int ControlItem::getInsideIndex2() const
{
    return currentindexInside2;
}

int ControlItem::getInsideIndex4() const
{
    return currentindexInside3;
}

int ControlItem::getIndex1() const
{
    return currentindex1;
}

int ControlItem::getIndex4() const
{
    return currentindex4;
}

int &ControlItem::GetStaticIndex1()
{
    return index1;
}

int &ControlItem::GetStaticIndex4()
{
    return index4;
}

int &ControlItem::GetStaticInsideIndex2()
{
    return indexInside2;
}

int &ControlItem::GetStaticInsideIndex3()
{
    return indexInside3;
}

ItemPosition ControlItem::inside() const
{
    return isInside;
}

int ControlItem::getOldSize() const
{
    return oldSize;
}

int ControlItem::getSize() const
{
    return size;
}

void ControlItem::setSize(int value)
{
    oldSize = size;
    size = value;
    update();
    scene()->update();
}

void ControlItem::setScenePos(QPoint &point)
{
    setPos(point);
}

QPoint ControlItem::getScenePos() const
{
    return pos().toPoint();
}
