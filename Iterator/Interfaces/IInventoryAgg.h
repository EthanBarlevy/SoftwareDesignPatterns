#pragma once
#include "IInventoryIterator.h"

class IInventoryAgg
{
public:
	virtual IInventoryIterator* GetIterator() { return new IInventoryIterator(); }
	virtual void AddItem(IItem* newItem) {};
	virtual void SwipeItem(IItem* item) {};
};