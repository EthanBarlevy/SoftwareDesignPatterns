#include "TurnDeviceOn.h"

TurnDeviceOn::TurnDeviceOn(IElectronicDevice* newDevice)
{
	device = newDevice;
}

void TurnDeviceOn::Execute()
{
	device->On();
}

void TurnDeviceOn::Undo()
{
	device->Off();
}
