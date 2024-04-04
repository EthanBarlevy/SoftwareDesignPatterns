#include <iostream>
#include "Client/TVRemote.h"
#include "Commands/TurnDeviceOn.h"
#include "Commands/TurnDeviceOff.h"
#include "Invokers/DeviceButton.h"

int main()
{
    IElectronicDevice* tvRemote = TVRemote::getDevice();

    TurnDeviceOn* onCommand = new TurnDeviceOn(tvRemote);

    DeviceButton* button = new DeviceButton(onCommand);

    button->Press();

    TurnDeviceOff* offCommand = new TurnDeviceOff(tvRemote);

    button = new DeviceButton(offCommand);

    button->Press();
}
