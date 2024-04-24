#include "FamilyMember.h"

FamilyMemeber::FamilyMemeber(std::string name, std::string year)
{
	this->name = name;
	this->year = year;
}

std::string FamilyMemeber::GetName(std::string start)
{
	return start + " - " + name + ", " + year + "\n";
}

void FamilyMemeber::Add(IFamilyGroup* MenuItem)
{
}

void FamilyMemeber::Remove(IFamilyGroup* MenuItem)
{
}
