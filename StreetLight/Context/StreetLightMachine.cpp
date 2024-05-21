#include "StreetLightMachine.h"

StreetLightMachine::StreetLightMachine(IStreetLightState* initialState)
{
    currentState = initialState;
}

StreetLightMachine::~StreetLightMachine()
{
    delete(currentState);
}

std::string StreetLightMachine::GetCurrentState()
{
    return currentState->GetState();
}

void StreetLightMachine::NextState()
{
    IStreetLightState* temp = currentState->NextState();
    delete(currentState);
    currentState = temp;
}
