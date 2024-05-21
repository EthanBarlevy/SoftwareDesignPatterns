#pragma once
#include <iostream>

class ICardSecurityState
{
public:
	virtual std::string GetName() { return ""; }
	virtual ICardSecurityState* CardValid() { return new ICardSecurityState; }
	virtual ICardSecurityState* DoorClosed() { return new ICardSecurityState; }
	virtual ICardSecurityState* CardInvalid() { return new ICardSecurityState; }
	virtual ICardSecurityState* Idle() { return new ICardSecurityState; }
};