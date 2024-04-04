#pragma once
#include <iostream>

class IElectronicDevice 
{
public:
	virtual void On() {};
	virtual void Off() {};
	virtual void VolumeUp() {};
	virtual void VolumeDown() {};
};