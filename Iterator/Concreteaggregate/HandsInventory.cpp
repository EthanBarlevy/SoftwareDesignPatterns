#include "HandsInventory.h"
#include "../Concreteiterator/HandsIterator.h"

IInventoryIterator* HandsInventory::GetIterator()
{
    return new HandsIterator(LeftHand, RightHand);
}

void HandsInventory::AddItem(IItem* newItem)
{
    if (!LeftHand)
    {
        LeftHand = newItem;
    }
    else if (!RightHand)
    {
        RightHand = newItem;
    }
    else
    {
        RightHand = LeftHand;
        LeftHand = newItem;
    }
}

void HandsInventory::SwipeItem(IItem* item)
{
    if (LeftHand == item)
    {
        LeftHand = nullptr;
    }
    if (RightHand == item)
    {
        RightHand = nullptr;
    }
}
