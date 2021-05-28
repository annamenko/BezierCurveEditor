#ifndef GRAPHICSPAINTER_HPP
#define GRAPHICSPAINTER_HPP

#include <QGraphicsItem>
#include <QVector2D>

#include "roundedpolygon.hpp"
#include "controlitem.hpp"

class ControlItem;

class GraphicsPainter : public QObject, public QGraphicsItem
{
    Q_OBJECT
    Q_INTERFACES(QGraphicsItem)

public:
    GraphicsPainter(QColor fill = Qt::black, QColor insideFill = Qt::white, QGraphicsItem *parent = nullptr);
    virtual ~GraphicsPainter();

public:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    QRectF boundingRect() const override;

    QList<QPoint> getDots1();
    QList<QPoint> getDots2();
    QList<QPoint> getDots3();
    QList<QPoint> getDots4();

    void setDots1(QVector<QPoint>& dots);
    void setDots2(QVector<QPoint>& dots);
    void setDots3(QVector<QPoint>& dots);
    void setDots4(QVector<QPoint>& dots);

    void setColorFilling(QColor& rgb);
    void setColorFillingInside(QColor& rgb);

    void addControls1(const QPoint point);
    void addControls2(const QPoint point);
    void addControls3(const QPoint point);
    void addControls4(const QPoint point);

    void updatePoint(int newSize);

    void setControl1(quint32 ind, const QPoint& point);
    void setControl2(quint32 ind, const QPoint& point);
    void setControl3(quint32 ind, const QPoint& point);
    void setControl4(quint32 ind, const QPoint& point);

    void update();

    static quint32 &getIndex();
    int getCurrentIndex() const;

    QColor getColorFill();

protected:
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event) override;
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event) override;
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;

public slots:
    void onchangedsceneposoutside1(int index, const QPoint& pos);
    void onchangedsceneposoutside4(int index, const QPoint& pos);
    void onchangedsceneposinside2(int index, const QPoint& pos);
    void onchangedsceneposinside3(int index, const QPoint& pos);

signals:
    void selected(QGraphicsItem *item);

private:
    float getSize(int size);

private:
    QRect rect;
    QVector<QPoint> pointDots1;
    QVector<QPoint> pointDots2;
    QVector<QPoint> pointDots3;
    QVector<QPoint> pointDots4;

    QPoint changedPoint;
    QPoint newPos;

    int size = 1;

    RoundedPolygon poly1;
    RoundedPolygon poly2;
    RoundedPolygon poly3;
    RoundedPolygon poly4;

    QColor colorFill;
    QColor colorFillInside;

    quint32 currentIndex;
    static quint32 index;


    // QGraphicsItem interface
protected:
    QVariant itemChange(GraphicsItemChange change, const QVariant &value) override;
};

#endif // GRAPHICSPAINTER_HPP
