#pragma once
#include "../Interfaces/ICommand.h"

class DeviceButton
{
private:
	ICommand* command;
public:
	DeviceButton(ICommand* newCommand);
	void Press();
	void UndoPress();
};