#include "TurnDeviceOff.h"

TurnDeviceOff::TurnDeviceOff(IElectronicDevice* newDevice)
{
	device = newDevice;
}

void TurnDeviceOff::Execute()
{
	device->Off();
}

void TurnDeviceOff::Undo()
{
	device->On();
}
