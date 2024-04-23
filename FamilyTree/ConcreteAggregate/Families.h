#pragma once
#include "../Interfaces/IFamilyAgg.h"
#include "../ConcreteIterator/FamilyIterator.h"
#include <vector>

class Families : public IFamilyAgg
{
public:
	Families();
	void AddItem(IFamilyGroup* item) override;
	IFamilyIterator* GetIterator() override;
	void RemoveItem(IFamilyGroup* item) override;
public:
	std::vector<IFamilyGroup*>* family;
};