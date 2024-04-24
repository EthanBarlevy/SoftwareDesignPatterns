#pragma once
#include "../Interfaces/IFamilyGroup.h"
#include <iostream>

class FamilyMemeber : public IFamilyGroup
{
public:
	FamilyMemeber(std::string name, std::string year);
	std::string GetName(std::string start) override;
	void Add(IFamilyGroup* MenuItem) override;
	void Remove(IFamilyGroup* MenuItem) override;
private:
	std::string name;
	std::string year;
};