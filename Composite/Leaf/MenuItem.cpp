#include "MenuItem.h"

MenuItem::MenuItem(std::string name)
{
	this->name = name;
}

void MenuItem::GetName()
{
	std::cout << " - " << name << std::endl;
}

void MenuItem::Add(IMenu* MenuItem)
{
}

void MenuItem::Remove(IMenu* MenuItem)
{
}
