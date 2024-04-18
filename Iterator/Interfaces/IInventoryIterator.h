#pragma once
#include "IItem.h"

class IInventoryIterator
{
public:
	virtual bool HasNext() { return false; }
	virtual void Next() {};
	virtual IItem* Current() { return new IItem(); }
};