#include "TurnDeviceUp.h"

TurnDeviceUp::TurnDeviceUp(IElectronicDevice* newDevice)
{
	device = newDevice;
}

void TurnDeviceUp::Execute()
{
	device->VolumeUp();
}

void TurnDeviceUp::Undo()
{
	device->VolumeDown();
}
