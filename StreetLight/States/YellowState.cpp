#include "YellowState.h"
#include "RedState.h"

std::string YellowState::GetState()
{
    return "Yellow";
}

IStreetLightState* YellowState::NextState()
{
    return new RedState;
}
