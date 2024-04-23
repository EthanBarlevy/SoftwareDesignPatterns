#include "Families.h"

Families::Families()
{
	family = new std::vector<IFamilyGroup*>();
}

void Families::AddItem(IFamilyGroup* item)
{
	family->push_back(item);
}

IFamilyIterator* Families::GetIterator()
{
	return new FamilyIterator(family);
}

void Families::RemoveItem(IFamilyGroup* item)
{
    auto it = std::find(family->begin(), family->end(), item);
    if (it != family->end())
    {
        int index = it - family->begin();
        family->erase(family->begin() + index);
    }
}
