#pragma once
#include "../Interfaces/ICommand.h"
#include "../Interfaces/IElectronicDevice.h"

class TurnDeviceOn : public ICommand
{
private:
	IElectronicDevice* device;
public:
	TurnDeviceOn(IElectronicDevice* newDevice);
	void Execute() override;
	void Undo() override;
};