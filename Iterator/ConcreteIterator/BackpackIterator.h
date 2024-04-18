#pragma once
#include "../Interfaces/IInventoryIterator.h"
#include <vector>

class BackpackIterator : public IInventoryIterator
{
public:
	BackpackIterator(std::vector<IItem*>* inventory);
	IItem* Current() override;
	bool HasNext() override;
	void Next() override;
private:
	std::vector<IItem*>* backpack;
	int index = 0;
};