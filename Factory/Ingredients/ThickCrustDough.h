#pragma once
#include "../Interfaces/IDough.h"
class ThickCrustDough : public IDough
{
public:
	std::string GetName() override;
};