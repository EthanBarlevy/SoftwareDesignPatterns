#pragma once
#include "../Interfaces/ICheese.h"
class RegianoCheese : public ICheese
{
public:
	std::string GetName() override;
};