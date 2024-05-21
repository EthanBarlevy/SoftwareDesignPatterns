#pragma once
#include "../Interfaces/IStreetLightState.h"

class StreetLightMachine 
{
public:
	StreetLightMachine(IStreetLightState* initialState);
	~StreetLightMachine();
	std::string GetCurrentState();
	void NextState();
private:
	IStreetLightState* currentState;
};