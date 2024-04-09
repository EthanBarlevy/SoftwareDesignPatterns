#include "ChangeTurtleColor.h"
#include "../Recievers/Turtle.h"

ChangeTurtleColor::ChangeTurtleColor(ITurtle* turt, vl::Color newColor)
{
	turtle = turt;
	color = newColor;
}

void ChangeTurtleColor::Execute()
{
	prevColor = dynamic_cast<Turtle*>(turtle)->GetColor();
	dynamic_cast<Turtle*>(turtle)->ChangeColor(color);
}

void ChangeTurtleColor::Undo()
{
	dynamic_cast<Turtle*>(turtle)->ChangeColor(prevColor);
}
