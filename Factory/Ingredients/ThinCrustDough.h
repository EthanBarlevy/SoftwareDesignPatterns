#pragma once
#include "../Interfaces/IDough.h"
class ThinCrustDough : public IDough
{
public:
	std::string GetName() override;
};