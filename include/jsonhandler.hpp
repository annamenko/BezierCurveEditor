#ifndef JSONHANDLER_HPP
#define JSONHANDLER_HPP

#include <QObject>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include "controlitem.hpp"

class JsonHandler : public QObject
{
    Q_OBJECT
public:
    static QJsonObject WriteJson(const QMap<GraphicsPainter *, QVector<ControlItem *>>& objectsMap);

};

#endif // JSONHANDLER_HPP
