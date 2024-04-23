#pragma once
#include "IFamilyIterator.h"

class IFamilyAgg
{
public:
	virtual IFamilyIterator* GetIterator() { return new IFamilyIterator(); }
	virtual void AddItem(IFamilyGroup* newItem) {};
	virtual void RemoveItem(IFamilyGroup* item) {};
};