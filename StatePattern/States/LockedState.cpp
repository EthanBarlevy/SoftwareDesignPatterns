#include "LockedState.h"
#include"UnlockedState.h"

std::string LockedState::GetName()
{
    return "Locked State";
}

ICardSecurityState* LockedState::CardValid()
{
    return new UnlockedState;
}

ICardSecurityState* LockedState::DoorClosed()
{
    return new LockedState;
}

ICardSecurityState* LockedState::CardInvalid()
{
    return new LockedState;
}

ICardSecurityState* LockedState::Idle()
{
    return new LockedState;
}
