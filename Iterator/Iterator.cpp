#include <iostream>
#include "Concreteaggregate/BackpackInventory.h"
#include "Items/Map.h"
#include "Items/Torch.h"
#include "Items/Book.h"

int main()
{
    IInventoryAgg* backpack = new BackpackInventory();
    IItem* map = new Map();
    backpack->AddItem(map);
    backpack->AddItem(new Torch());
    backpack->AddItem(new Book("Holes"));

    std::cout << "---------- BACKPACK ----------" << std::endl;
    IInventoryIterator* backpackInterator = backpack->GetIterator();
    while (backpackInterator->HasNext())
    {
        std::cout << *backpackInterator->Current()->Name() << std::endl;
        backpackInterator->Next();
    }
}
