#pragma once
#include "../Interfaces/ICommand.h"
#include "../Interfaces/IElectronicDevice.h"

class TurnDeviceOff : public ICommand
{
private:
	IElectronicDevice* device;
public:
	TurnDeviceOff(IElectronicDevice* newDevice);
	void Execute() override;
	void Undo() override;
};