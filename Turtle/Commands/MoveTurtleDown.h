#pragma once
#include "../Interfaces/ICommand.h"
#include "../Interfaces/ITurtle.h"

class MoveTurtleDown : public ICommand
{
private:
	ITurtle* turtle;
public:
	MoveTurtleDown(ITurtle* turt);
	void Execute() override;
	void Undo() override;
};