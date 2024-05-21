#include "CardSecurityTerminal.h"

CardSecurityTerminal::CardSecurityTerminal(ICardSecurityState* initalState)
{
	myState = initalState;
}

CardSecurityTerminal::~CardSecurityTerminal()
{
	delete(myState);
}

std::string CardSecurityTerminal::CurrentState()
{
	return "Current State: " + myState->GetName();
}

void CardSecurityTerminal::CardValid()
{
	ICardSecurityState* temp = myState->CardValid();
	delete(myState);
	myState = temp;
}

void CardSecurityTerminal::DoorClosed()
{
	ICardSecurityState* temp = myState->DoorClosed();
	delete(myState);
	myState = temp;
}

void CardSecurityTerminal::CardInvalid()
{
	ICardSecurityState* temp = myState->CardInvalid();
	delete(myState);
	myState = temp;
}

void CardSecurityTerminal::Idle()
{
	ICardSecurityState* temp = myState->Idle();
	delete(myState);
	myState = temp;
}
