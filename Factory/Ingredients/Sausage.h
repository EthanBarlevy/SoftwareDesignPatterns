#pragma once
#include "../Interfaces/IMeat.h"
class Sausage : public IMeat
{
public:
	std::string GetName() override;
};