#pragma once
#include "../Interfaces/IVeggie.h"
class Spinach : public IVeggie
{
public:
	std::string GetName() override;
};