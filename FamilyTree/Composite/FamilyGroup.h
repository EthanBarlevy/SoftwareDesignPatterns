#pragma once
#include "../Interfaces/IFamilyGroup.h"
#include "../ConcreteAggregate/Families.h"
#include <iostream>

class FamilyGroup : public IFamilyGroup
{
public:
	FamilyGroup(std::string name, std::string year);
	std::string GetName(std::string start) override;
	void Add(IFamilyGroup* MenuItem) override;
	void Remove(IFamilyGroup* MenuItem) override;
private:
	std::string name;
	std::string year;
	Families family;
};