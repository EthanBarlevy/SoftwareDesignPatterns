#pragma once
#include "engine.h"

class ITurtle
{
public:
	virtual void MoveUp() {};
	virtual void MoveDown() {};
	virtual void MoveLeft() {};
	virtual void MoveRight() {};
	virtual void ChangeColor(vl::Color newColor) {};
};