#include <iostream>
#include "Context/CardSecurityTerminal.h"
#include "States/LockedState.h"
#include "States/UnlockedState.h"

int main()
{
    CardSecurityTerminal* cardScanner = new CardSecurityTerminal(new LockedState);
    std::cout << cardScanner->CurrentState() << std::endl;

    std::cout << "Swipe Valid Card" << std::endl;
    cardScanner->CardValid();
    std::cout << cardScanner->CurrentState() << std::endl;

    std::cout << "Door Closes" << std::endl;
    cardScanner->DoorClosed();
    std::cout << cardScanner->CurrentState() << std::endl;

    delete(cardScanner);
}