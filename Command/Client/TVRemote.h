#pragma once
#include "../Interfaces/IElectronicDevice.h"
#include "../Recievers/Television.h"

class TVRemote
{
public:
	static IElectronicDevice* getDevice();
};