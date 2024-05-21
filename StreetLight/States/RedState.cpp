#include "RedState.h"
#include "GreenState.h"

std::string RedState::GetState()
{
    return "Red";
}

IStreetLightState* RedState::NextState()
{
    return new GreenState;
}
