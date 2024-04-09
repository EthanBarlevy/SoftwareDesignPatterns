#include <iostream>
#include <vector>
#include "Client/TVRemote.h"
#include "Client/RadioRemote.h"
#include "Commands/TurnDeviceOn.h"
#include "Commands/TurnDeviceOff.h"
#include "Commands/TurnDeviceUp.h"
#include "Commands/TurnDeviceDown.h"
#include "Commands/TurnItAllOff.h"
#include "Invokers/DeviceButton.h"

int main()
{
    IElectronicDevice* tvRemote = TVRemote::getDevice();

    // turn on
    TurnDeviceOn* onCommand = new TurnDeviceOn(tvRemote);
    DeviceButton* button = new DeviceButton(onCommand);
    button->Press();

    // turn off
    TurnDeviceOff* offCommand = new TurnDeviceOff(tvRemote);
    button = new DeviceButton(offCommand);
    button->Press();

    // turn device up
    TurnDeviceUp* upCommand = new TurnDeviceUp(tvRemote);
    button = new DeviceButton(upCommand);
    button->Press();
    button->Press();
    button->Press();

    IElectronicDevice* radioRemote = RadioRemote::getDevice();

    // turn on
    TurnDeviceOn* radioOnCommand = new TurnDeviceOn(radioRemote);
    button = new DeviceButton(radioOnCommand);
    button->Press();

    std::cout << "------TURN EVERYTHING OFF-------\n";
    std::vector<IElectronicDevice*>* allDevices = new std::vector<IElectronicDevice*>();
    allDevices->push_back(tvRemote);
    allDevices->push_back(radioRemote);
    TurnItAllOff* turnAllOff = new TurnItAllOff(allDevices);
    button = new DeviceButton(turnAllOff);
    button->Press();

    std::cout << "------TURN EVERYTHING ON-------\n";
    button->UndoPress();
}
