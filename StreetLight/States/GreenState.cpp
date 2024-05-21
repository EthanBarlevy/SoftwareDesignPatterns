#include "GreenState.h"
#include "YellowState.h"

std::string GreenState::GetState()
{
    return "Green";
}

IStreetLightState* GreenState::NextState()
{
    return new YellowState;
}
