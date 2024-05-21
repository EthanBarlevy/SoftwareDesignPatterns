#pragma once
#include "../Interfaces/ICardSecurityState.h"

class UnlockedState : public ICardSecurityState 
{
public:
	std::string GetName() override;
	ICardSecurityState* CardValid() override;
	ICardSecurityState* DoorClosed() override;
	ICardSecurityState* CardInvalid() override;
	ICardSecurityState* Idle() override;
};