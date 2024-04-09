#pragma once
#include "../Interfaces/ITurtle.h"
#include "../Recievers/Turtle.h"

class CommandPanel
{
public:
	static ITurtle* GetTurtle(vl::Scene* scene);
};