#include "MenuCategory.h"

MenuCategory::MenuCategory(std::string name)
{
	this->name = name;
}

void MenuCategory::GetName()
{
    std::cout << name << std::endl;
    // do this with the iterator pattern instead
    for (IMenu* menuItem : menuItems)
    {
        menuItem->GetName();
    }
}

void MenuCategory::Add(IMenu* MenuItem)
{
	menuItems.push_back(MenuItem);
}

void MenuCategory::Remove(IMenu* MenuItem)
{
    auto it = std::find(menuItems.begin(), menuItems.end(), MenuItem);
    if (it != menuItems.end())
    {
        int index = it - menuItems.begin();
        menuItems.erase(menuItems.begin() + index);
    }
}
