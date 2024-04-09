#pragma once
#include "../Interfaces/ICommand.h"
#include "../Interfaces/ITurtle.h"

class ChangeTurtleColor : public ICommand
{
private:
	ITurtle* turtle;
	vl::Color color;
	vl::Color prevColor;
public:
	ChangeTurtleColor(ITurtle* turt, vl::Color newColor);
	void Execute() override;
	void Undo() override;
};