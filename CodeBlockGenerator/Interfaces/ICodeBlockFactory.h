#pragma once
#include "./IAttribute.h"
#include <vector>

class ICodeBlockFactory
{
public:
	virtual std::vector<IAttribute*>* GetAttributes() { return new std::vector<IAttribute*>; }
};