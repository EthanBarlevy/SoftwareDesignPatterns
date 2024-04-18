#include <iostream>
#include "Concreteaggregate/BackpackInventory.h"
#include "Concreteaggregate/HandsInventory.h"
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
    backpack->SwipeItem(map);

    std::cout << "---------- BACKPACK ----------" << std::endl;
    IInventoryIterator* backpackInterator = backpack->GetIterator();
    while (backpackInterator->HasNext())
    {
        std::cout << *backpackInterator->Current()->Name() << std::endl;
        backpackInterator->Next();
    }

    std::cout << "---------- HANDS ----------" << std::endl;
    IInventoryAgg* hands = new HandsInventory();
    hands->AddItem(new Torch());
    hands->AddItem(map);
    hands->AddItem(new Book("The T in LGBT"));

    IInventoryIterator* handsIterator = hands->GetIterator();
    while (handsIterator->HasNext())
    {
        std::cout << *handsIterator->Current()->Name() << std::endl;
        handsIterator->Next();
    }
}
