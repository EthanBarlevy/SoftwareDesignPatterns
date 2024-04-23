#pragma once
#include "../Interfaces/IMenu.h"
#include <iostream>

class MenuItem : public IMenu
{
public:
	MenuItem(std::string name);
	void GetName() override;
	void Add(IMenu* MenuItem) override;
	void Remove(IMenu* MenuItem) override;
private:
	std::string name;
};