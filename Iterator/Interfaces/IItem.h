#pragma once
#include <string>

class IItem 
{
public:
	virtual std::string* Name() { return new std::string(); }
};