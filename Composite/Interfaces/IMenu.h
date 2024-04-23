#pragma once

class IMenu
{
public:
	virtual void GetName() {};
	virtual void Add(IMenu* MenuItem) {};
	virtual void Remove(IMenu* MenuItem) {};
};