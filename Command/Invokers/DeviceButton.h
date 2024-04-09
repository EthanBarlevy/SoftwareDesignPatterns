#pragma once
#include "../Interfaces/ICommand.h"

class DeviceButton
{
private:
	ICommand* command;
	// all of the undo stuff should be in here
	// have a list of commands instead of a variable
	// add to the list when we press
	// remove when undo
public:
	DeviceButton(ICommand* newCommand);
	void Press();
	void UndoPress();
};