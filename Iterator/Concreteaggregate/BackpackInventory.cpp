#include "BackpackInventory.h"

BackpackInventory::BackpackInventory()
{
    inventory = new std::vector<IItem*>();
}

void BackpackInventory::AddItem(IItem* item)
{
    inventory->push_back(item);
}

IInventoryIterator* BackpackInventory::GetIterator()
{
    return new BackpackIterator(inventory);
}

void BackpackInventory::SwipeItem(IItem* item)
{
    auto it = std::find(inventory->begin(), inventory->end(), item); 
    if (it != inventory->end())  
    { 
        int index = it - inventory->begin(); 
        inventory->erase(inventory->begin() + index);
    } 
}
