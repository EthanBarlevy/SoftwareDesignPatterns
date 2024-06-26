#include "Button.h"
#include <iostream>

void Button::AddCommand(ICommand* newCommand)
{
	commands.push(newCommand);
	command = commands.top();
	std::cout << "Added. commands left: " << commands.size() << std::endl;
}

void Button::Press()
{
	command->Execute();
}

void Button::UndoPress()
{
	if (commands.size())
	{
		command->Undo();
		commands.pop();
		if (commands.size())
		{
			command = commands.top();
		}
		std::cout << "Removed. commands left: " << commands.size() << std::endl;
	}
}
