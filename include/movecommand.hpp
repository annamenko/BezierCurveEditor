#ifndef MOVECOMMAND_HPP
#define MOVECOMMAND_HPP

#include <QUndoCommand>

#include "controlitem.hpp"

class MoveCommand : public QUndoCommand
{
public:
    MoveCommand(ControlItem *item, QPoint& old, QUndoCommand *parent = nullptr);

    void undo() override;
    void redo() override;

private:
    ControlItem *controlItem;
    QPoint oldPos;
    QPoint newPos;
};

#endif // MOVECOMMAND_HPP
