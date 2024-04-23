#include "FamilyMember.h"

FamilyMemeber::FamilyMemeber(std::string name, std::string year)
{
	this->name = name;
	this->year = year;
}

void FamilyMemeber::GetName(std::string start)
{
	std::cout << start << " - " << name << ", " << year << std::endl;
}

void FamilyMemeber::Add(IFamilyGroup* MenuItem)
{
}

void FamilyMemeber::Remove(IFamilyGroup* MenuItem)
{
}
