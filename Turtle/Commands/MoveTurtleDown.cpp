#include "MoveTurtleDown.h"

MoveTurtleDown::MoveTurtleDown(ITurtle* turt)
{
	turtle = turt;
}

void MoveTurtleDown::Execute()
{
	turtle->MoveDown();
}

void MoveTurtleDown::Undo()
{
	turtle->MoveUp();
}
