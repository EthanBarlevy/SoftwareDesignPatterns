#pragma once
#include "../Interfaces/IStreetLightState.h"

class GreenState : public IStreetLightState
{
public:
	std::string GetState() override;
	IStreetLightState* NextState() override;
};