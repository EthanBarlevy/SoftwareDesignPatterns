#pragma once
#include "../Interfaces/IVeggie.h"
class BlackOlive : public IVeggie
{
public:
	std::string GetName() override;
};