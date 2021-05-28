#ifndef ROUNDEDPOLYGON_HPP
#define ROUNDEDPOLYGON_HPP

#include <QPolygon>
#include <QPainterPath>

class RoundedPolygon : public QPolygon
{
public:
    RoundedPolygon()
    {    SetRadius(10); }
    void SetRadius(unsigned int iRadius)
    {    m_iRadius = iRadius; }
    const QPainterPath& GetPath();

private:
    QPointF GetLineStart(int i) const;
    QPointF GetLineEnd(int i) const;
    float GetDistance(QPoint pt1, QPoint pt2) const;
private:
    QPainterPath m_path;
    unsigned int m_iRadius;
};
#endif // ROUNDEDPOLYGON_HPP
