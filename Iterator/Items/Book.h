#pragma once
#include "../Interfaces/IItem.h"

class Book : public IItem
{
public:
	Book(std::string bookName);
	std::string* Name() override;
private:
	std::string name;
};