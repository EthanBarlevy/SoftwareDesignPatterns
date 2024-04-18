#pragma once
#include "../Interfaces/IInventoryIterator.h"
#include "../concreteAggregate/HandsInventory.h"

class HandsIterator : public IInventoryIterator
{
public:
	HandsIterator(IItem* LeftHand, IItem* RightHand);
	IItem* Current();
	bool HasNext();
	void Next();
public:
	IItem* LeftHand;
	IItem* RightHand;
	int index = 0;
};