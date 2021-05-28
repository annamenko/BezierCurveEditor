#include "../include/movecommand.hpp"
#include <QGraphicsScene>

MoveCommand::MoveCommand(ControlItem *item, QPoint &old, QUndoCommand *parent) :
    QUndoCommand(parent), controlItem(item), oldPos(old), newPos(item->getScenePos())
{

}

void MoveCommand::undo()
{
    controlItem->setScenePos(oldPos);
    controlItem->inside()   ?    controlItem->parentGraphics->setControl2(controlItem->getInsideIndex2(), oldPos)
                            :    controlItem->parentGraphics->setControl1(controlItem->getIndex1(), oldPos);
    controlItem->scene()->update();
}

void MoveCommand::redo()
{
    controlItem->setScenePos(newPos);
    controlItem->inside()   ?    controlItem->parentGraphics->setControl2(controlItem->getInsideIndex2(), newPos)
                            :    controlItem->parentGraphics->setControl1(controlItem->getIndex1(), newPos);
    controlItem->scene()->update();
}
