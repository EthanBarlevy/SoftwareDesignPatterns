#include <iostream>
#include "Composite/MenuCategory.h"
#include "Leaf/MenuItem.h"

int main()
{
    IMenu* menu = new MenuCategory("Menu");
        IMenu* menuBurgers = new MenuCategory("Burgers");
            menuBurgers->Add(new MenuItem("Classic Burger"));
            IMenu* subCategory = new MenuCategory("Spicy");
                subCategory->Add(new MenuItem("Jalepeno Burger"));
                subCategory->Add(new MenuItem("Chili Burger"));
            menuBurgers->Add(subCategory);
        menu->Add(menuBurgers);
        IMenu* menuSoups = new MenuCategory("Soups");
            menuSoups->Add(new MenuItem("Clam Chowder"));
            menuSoups->Add(new MenuItem("Chicken Noodle"));
        menu->Add(menuSoups);

    menu->GetName();
}
