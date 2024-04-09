#include "Turtle.h"

void Turtle::SetActor(vl::Scene* scene)
{
	actor = scene->GetActorFromName<vl::Actor>("Turtle");
}

void Turtle::MoveUp()
{
	actor->GetTransform().position.y -= 20;
}

void Turtle::MoveDown()
{
	actor->GetTransform().position.y += 20;
}

void Turtle::MoveLeft()
{
	actor->GetTransform().position.x -= 20;
}

void Turtle::MoveRight()
{
	actor->GetTransform().position.x += 20;
}

void Turtle::ChangeColor(vl::Color newColor)
{
	actor->GetComponent<vl::SquareComponent>()->ChangeColor(newColor);
}

vl::Color Turtle::GetColor()
{
	return actor->GetComponent<vl::SquareComponent>()->color;
}
