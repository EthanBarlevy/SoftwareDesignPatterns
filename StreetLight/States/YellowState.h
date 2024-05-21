#pragma once
#include "../Interfaces/IStreetLightState.h"

class YellowState : public IStreetLightState
{
public:
	std::string GetState() override;
	IStreetLightState* NextState() override;
};