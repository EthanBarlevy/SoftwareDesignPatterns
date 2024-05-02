#pragma once
#include "../Interfaces/IVeggie.h"
class RedPepper : public IVeggie
{
public:
	std::string GetName() override;
};