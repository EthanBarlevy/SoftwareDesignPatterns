#include "TurnItAllOff.h"

TurnItAllOff::TurnItAllOff(std::vector<IElectronicDevice>* newDevices)
{
	devices = newDevices;
}

void TurnItAllOff::Execute()
{
	for (auto device : *devices)
	{
		device.Off();
	}
}

void TurnItAllOff::Undo()
{
	for (auto device : *devices)
	{
		device.On();
	}
}
