#ifndef CONTROLITEM_HPP
#define CONTROLITEM_HPP

#include <QGraphicsItem>
#include <QPen>
#include "graphicspainter.hpp"

class GraphicsPainter;

enum ItemPosition
{
    None = 0,
    Inside1 = 1,
    Inside2 = 2,
    Outside1 = 3,
    Outside2 = 4
};

class ControlItem : public QObject, public QGraphicsItem
{
    Q_OBJECT
    Q_INTERFACES(QGraphicsItem)
public:
    static const int DEFAULT_SIZE;

    ControlItem();
    ControlItem(GraphicsPainter *parent, ItemPosition position);
    ControlItem(GraphicsPainter *parent, int size, ItemPosition position);

    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

    int getSize() const;
    void setSize(int value);

    void setScenePos(QPoint& point);
    QPoint getScenePos() const;

    void hoverEnterEvent(QGraphicsSceneHoverEvent *event) override;
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;

    int getIndex1() const;
    int getIndex4() const;
    int getInsideIndex2() const;
    int getInsideIndex4() const;

    static int& GetStaticIndex1();
    static int& GetStaticIndex4();
    static int& GetStaticInsideIndex2();
    static int& GetStaticInsideIndex3();

    ItemPosition inside() const;

signals:
    void changedsceneposoutside1(int index, const QPoint pos);
    void changedsceneposoutside4(int index, const QPoint pos);
    void changedsceneposinside2(int index, const QPoint pos);
    void changedsceneposinside3(int index, const QPoint pos);


    void mousepressedoldpos(const QPoint pos);
    void mousereleasednewpos(const QPoint pos, ControlItem *item);

private:
    ItemPosition isInside;
    int currentindexInside2 = 0;
    int currentindexInside3 = 0;
    int currentindex1 = 0;
    int currentindex4 = 0;

    static int index1;
    static int index4;
    static int indexInside2;
    static int indexInside3;

    int size;
    int oldSize;
    QPen pen;

public:
    GraphicsPainter *parentGraphics;
    int getOldSize() const;

};
#endif // CONTROLITEM_HPP
