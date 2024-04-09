#pragma once
#include "../Interfaces/ICommand.h"
#include "../Interfaces/ITurtle.h"

class MoveTurtleRight : public ICommand
{
private:
	ITurtle* turtle;
public:
	MoveTurtleRight(ITurtle* turt);
	void Execute() override;
	void Undo() override;
};