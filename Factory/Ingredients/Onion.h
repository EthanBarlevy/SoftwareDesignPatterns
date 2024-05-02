#pragma once
#include "../Interfaces/IVeggie.h"
class Onion : public IVeggie
{
public:
	std::string GetName() override;
};