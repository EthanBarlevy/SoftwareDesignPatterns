#pragma once
#include "../Interfaces/IElectronicDevice.h"
#include "../Recievers/Radio.h"

class RadioRemote 
{
public:
	static IElectronicDevice* getDevice();
};