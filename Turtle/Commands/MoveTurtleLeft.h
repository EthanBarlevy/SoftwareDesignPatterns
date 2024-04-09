#pragma once
#include "../Interfaces/ICommand.h"
#include "../Interfaces/ITurtle.h"

class MoveTurtleLeft : public ICommand
{
private:
	ITurtle* turtle;
public:
	MoveTurtleLeft(ITurtle* turt);
	void Execute() override;
	void Undo() override;
};