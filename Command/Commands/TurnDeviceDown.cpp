#include "TurnDeviceDown.h"

TurnDeviceDown::TurnDeviceDown(IElectronicDevice* newDevice)
{
	device = newDevice;
}

void TurnDeviceDown::Execute()
{
	device->VolumeDown();
}

void TurnDeviceDown::Undo()
{
	device->VolumeUp();
}
