#pragma once

class ICommand
{
public:
	virtual void Execute() {};
	virtual void Undo() {};
};