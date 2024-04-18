#include "BackpackIterator.h"

BackpackIterator::BackpackIterator(std::vector<IItem*>* inventory)
{
	backpack = inventory;
}

IItem* BackpackIterator::Current()
{
	return backpack->at(index);
}

bool BackpackIterator::HasNext()
{
	return index < backpack->size();
}

void BackpackIterator::Next()
{
	index++;
}
