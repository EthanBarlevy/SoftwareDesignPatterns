#include "MoveTurtleLeft.h"

MoveTurtleLeft::MoveTurtleLeft(ITurtle* turt)
{
	turtle = turt;
}

void MoveTurtleLeft::Execute()
{
	turtle->MoveLeft();
}

void MoveTurtleLeft::Undo()
{
	turtle->MoveRight();
}
