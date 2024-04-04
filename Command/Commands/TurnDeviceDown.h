#pragma once
#include "../Interfaces/ICommand.h"
#include "../Interfaces/IElectronicDevice.h"

class TurnDeviceDown : public ICommand
{
private:
	IElectronicDevice* device;
public:
	TurnDeviceDown(IElectronicDevice* newDevice);
	void Execute() override;
	void Undo() override;
};