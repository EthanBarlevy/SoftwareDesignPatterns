#pragma once
#include "../Interfaces/IMeat.h"
class Pepperoni : public IMeat
{
public:
	std::string GetName() override;
};