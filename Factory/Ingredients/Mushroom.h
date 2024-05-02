#pragma once
#include "../Interfaces/IVeggie.h"
class Mushroom : public IVeggie
{
public:
	std::string GetName() override;
};