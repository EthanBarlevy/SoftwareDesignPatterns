#include "MoveTurtleRight.h"

MoveTurtleRight::MoveTurtleRight(ITurtle* turt)
{
	turtle = turt;
}

void MoveTurtleRight::Execute()
{
	turtle->MoveRight();
}

void MoveTurtleRight::Undo()
{
	turtle->MoveLeft();
}
