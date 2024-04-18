#pragma once
#include"../Interfaces/IInventoryAgg.h"

class HandsInventory : public IInventoryAgg
{
public:
	HandsInventory() {};
	IInventoryIterator* GetIterator() override;
	void AddItem(IItem* newItem);
	void SwipeItem(IItem* item);
public:
	IItem* LeftHand;
	IItem* RightHand;
};