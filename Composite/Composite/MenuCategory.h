#pragma once
#include "../Interfaces/IMenu.h"
#include <iostream>
#include <vector>

class MenuCategory : public IMenu
{
public:
	MenuCategory(std::string name);
	void GetName() override;
	void Add(IMenu* MenuItem) override;
	void Remove(IMenu* MenuItem) override;
private:
	std::string name;
	std::vector<IMenu*> menuItems; // this vector will be the iterator
};