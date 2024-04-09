#pragma once
#include "../Interfaces/ICommand.h"
#include "../Interfaces/IElectronicDevice.h"
#include <vector>

class TurnItAllOff : public ICommand
{
private:
	std::vector<IElectronicDevice*>* devices;
public:
	TurnItAllOff(std::vector<IElectronicDevice*>* newDevices);
	void Execute() override;
	void Undo() override;
};