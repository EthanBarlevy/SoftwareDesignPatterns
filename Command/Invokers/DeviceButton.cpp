#include "DeviceButton.h"

DeviceButton::DeviceButton(ICommand* newCommand)
{
	command = newCommand;
}

void DeviceButton::Press()
{
	command->Execute();
}

void DeviceButton::UndoPress()
{
	command->Undo();
}
