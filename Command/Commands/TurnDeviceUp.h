#pragma once
#include "../Interfaces/ICommand.h"
#include "../Interfaces/IElectronicDevice.h"

class TurnDeviceUp : public ICommand
{
private:
	IElectronicDevice* device;
public:
	TurnDeviceUp(IElectronicDevice* newDevice);
	void Execute() override;
	void Undo() override;
};