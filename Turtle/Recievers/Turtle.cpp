#include "Turtle.h"

void Turtle::MoveUp()
{
	actor.GetTransform().position.y -= 20;
}

void Turtle::MoveDown()
{
	actor.GetTransform().position.y += 20;
}

void Turtle::MoveLeft()
{
	actor.GetTransform().position.x -= 20;
}

void Turtle::MoveRight()
{
	actor.GetTransform().position.x += 20;
}

void Turtle::ChangeColor(vl::Color newColor)
{
}
