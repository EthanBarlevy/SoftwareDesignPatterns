#pragma once
#include "../Interfaces/IFamilyIterator.h"
#include <vector>

class FamilyIterator : public IFamilyIterator
{
public:
	FamilyIterator(std::vector<IFamilyGroup*>* inventory);
	IFamilyGroup* Current() override;
	bool HasNext() override;
	void Next() override;
private:
	std::vector<IFamilyGroup*>* family;
	int index = 0;
};