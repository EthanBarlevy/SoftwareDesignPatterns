#pragma once
#include "IFamilyGroup.h"

class IFamilyIterator
{
public:
	virtual bool HasNext() { return false; }
	virtual void Next() {};
	virtual IFamilyGroup* Current() { return new IFamilyGroup(); }
};