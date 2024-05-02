#pragma once
#include "../Interfaces/IMeat.h"
class Ham : public IMeat
{
public:
	std::string GetName() override;
};