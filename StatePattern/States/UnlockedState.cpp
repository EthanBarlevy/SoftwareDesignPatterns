#include "UnlockedState.h"
#include "LockedState.h"

std::string UnlockedState::GetName()
{
    return "Unlocked State";
}

ICardSecurityState* UnlockedState::CardValid()
{
    return new UnlockedState;
}

ICardSecurityState* UnlockedState::DoorClosed()
{
    return new LockedState;
}

ICardSecurityState* UnlockedState::CardInvalid()
{
    return new LockedState;
}

ICardSecurityState* UnlockedState::Idle()
{
    return new UnlockedState;
}
