#include "FamilyGroup.h"

FamilyGroup::FamilyGroup(std::string name, std::string year)
{
	this->name = name;
	this->year = year;
}

std::string FamilyGroup::GetName(std::string start)
{
	std::string names = start + name + ", " + year + "\n";
	IFamilyIterator* iterator = family.GetIterator();
	while (iterator->HasNext())
	{
		names += iterator->Current()->GetName(start + "   ");
		iterator->Next();
	}
	return names;
}


void FamilyGroup::Add(IFamilyGroup* MenuItem)
{
	family.AddItem(MenuItem);
}

void FamilyGroup::Remove(IFamilyGroup* MenuItem)
{
	family.RemoveItem(MenuItem);
}
