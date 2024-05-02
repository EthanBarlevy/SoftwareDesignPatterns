#pragma once
#include "../Interfaces/IVeggie.h"
class Garlic : public IVeggie
{
public:
	std::string GetName() override;
};