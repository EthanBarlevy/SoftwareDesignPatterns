#pragma once
#include "engine.h"
#include <iostream>

class IStreetLightState
{
public:
	virtual std::string GetState() { return ""; }
	virtual IStreetLightState* NextState() { return new IStreetLightState; }
};