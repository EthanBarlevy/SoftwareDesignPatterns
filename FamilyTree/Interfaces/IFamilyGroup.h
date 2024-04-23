#pragma once
#include <string>

class IFamilyGroup
{
public:
	virtual void GetName(std::string start) {};
	virtual void Add(IFamilyGroup* MenuItem) {};
	virtual void Remove(IFamilyGroup* MenuItem) {};
};