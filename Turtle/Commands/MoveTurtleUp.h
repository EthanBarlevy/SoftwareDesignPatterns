#pragma once
#include "../Interfaces/ICommand.h"
#include "../Interfaces/ITurtle.h"

class MoveTurtleUp : public ICommand
{
private:
	ITurtle* turtle;
public:
	MoveTurtleUp(ITurtle* turt);
	void Execute() override;
	void Undo() override;
};