#include "../include/jsonhandler.hpp"
#include <QPair>

QJsonObject JsonHandler::WriteJson(const QMap<GraphicsPainter *, QVector<ControlItem *>>& objectsMap)
{
    QJsonObject objects;
    QJsonArray objectsArray;

    QList<GraphicsPainter *> painters = objectsMap.keys();
    QList<QVector<ControlItem *>> vectorItems = objectsMap.values();

    for (qint32 idx = 0; idx < objectsMap.count(); ++idx)
    {
        QJsonObject obj;
        QJsonArray polygon1;
        QJsonArray polygon2;
        QJsonArray polygon3;
        QJsonArray polygon4;

        GraphicsPainter *painter = painters.at(idx);
        QVector<ControlItem *> items = vectorItems.at(idx);

        obj["color"] = painter->getColorFill().name();

        for (auto& item : items)
        {
            ItemPosition itemPosition = item->inside();

            QPoint position = item->scenePos().toPoint();
            QString pos = QString::number(position.x()) + " " + QString::number(position.y());

            switch (itemPosition)
            {
            case ItemPosition::Inside1:
                polygon2.append(pos);
                break;
            case ItemPosition::Inside2:
                polygon3.append(pos);
                break;
            case ItemPosition::Outside1:
                polygon1.append(pos);
                break;
            case ItemPosition::Outside2:
                polygon4.append(pos);
                break;
            default:
                break;
            }
        }

        obj["polygon1"] = polygon1;
        obj["polygon2"] = polygon2;
        obj["polygon3"] = polygon3;
        obj["polygon4"] = polygon4;

        objectsArray.append(obj);
    }

    objects["object-on-scene"] = objectsArray;

    return objects;
}
