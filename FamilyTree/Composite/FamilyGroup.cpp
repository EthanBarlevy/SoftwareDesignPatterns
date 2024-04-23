#include "FamilyGroup.h"

FamilyGroup::FamilyGroup(std::string name, std::string year)
{
	this->name = name;
	this->year = year;
}

void FamilyGroup::GetName(std::string start)
{
	std::cout << start << name  << ", " << year << std::endl;
	IFamilyIterator* iterator = family.GetIterator();
	while (iterator->HasNext())
	{
		iterator->Current()->GetName(start + "   ");
		iterator->Next();
	}
}


void FamilyGroup::Add(IFamilyGroup* MenuItem)
{
	family.AddItem(MenuItem);
}

void FamilyGroup::Remove(IFamilyGroup* MenuItem)
{
	family.RemoveItem(MenuItem);
}
