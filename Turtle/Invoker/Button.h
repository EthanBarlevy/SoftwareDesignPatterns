#pragma once
#include "../Interfaces/ICommand.h"
#include <stack>

class Button
{
private:
	ICommand* command;
	std::stack<ICommand*> commands;
	// all of the undo stuff should be in here
	// have a list of commands instead of a variable
	// add to the list when we press
	// remove when undo
public:
	void AddCommand(ICommand* newCommand);
	void Press();
	void UndoPress();
};