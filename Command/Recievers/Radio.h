#pragma once
#include "../Interfaces/IElectronicDevice.h"

class Radio : public IElectronicDevice
{
private:
	int volume = 0;
public:
	void On() override;
	void Off() override;
	void VolumeUp() override;
	void VolumeDown() override;
};