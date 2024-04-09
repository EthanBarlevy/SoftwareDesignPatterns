#pragma once
#include "../Interfaces/ITurtle.h"

class Turtle : public ITurtle
{
private:
	vl::Actor actor;
public:
	Turtle();
	void MoveUp();
	void MoveDown();
	void MoveLeft();
	void MoveRight();
	void ChangeColor(vl::Color newColor);
};