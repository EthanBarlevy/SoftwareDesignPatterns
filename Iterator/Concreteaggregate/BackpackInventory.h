#pragma once
#include "../Interfaces/IInventoryAgg.h"
#include "../ConcreteIterator/BackpackIterator.h"
#include <vector>

class BackpackInventory : public IInventoryAgg
{
public:
	BackpackInventory();
	void AddItem(IItem* item) override;
	IInventoryIterator* GetIterator() override;
	void SwipeItem(IItem* item) override;
public:
	std::vector<IItem*>* inventory;
};