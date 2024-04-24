#pragma once
#include <string>

class IFamilyGroup
{
public:
	virtual std::string GetName(std::string start) { return ""; };
	virtual void Add(IFamilyGroup* MenuItem) {};
	virtual void Remove(IFamilyGroup* MenuItem) {};
};