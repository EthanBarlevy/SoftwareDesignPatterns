#pragma once

#include "../Interfaces/IStreetLightState.h"

class RedState : public IStreetLightState
{
public:
	std::string GetState() override;
	IStreetLightState* NextState() override;
};