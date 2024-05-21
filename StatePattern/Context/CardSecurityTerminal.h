#pragma once
#include "../Interfaces/ICardSecurityState.h"

class CardSecurityTerminal
{
public:
	CardSecurityTerminal(ICardSecurityState* initalState);
	~CardSecurityTerminal();
	std::string CurrentState();
	void CardValid();
	void DoorClosed();
	void CardInvalid();
	void Idle();

private:
	ICardSecurityState* myState;
};