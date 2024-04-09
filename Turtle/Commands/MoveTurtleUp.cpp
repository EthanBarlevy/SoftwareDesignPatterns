#include "MoveTurtleUp.h"

MoveTurtleUp::MoveTurtleUp(ITurtle* turt)
{
	turtle = turt;
}

void MoveTurtleUp::Execute()
{
	turtle->MoveUp();
}

void MoveTurtleUp::Undo()
{
	turtle->MoveDown();
}
