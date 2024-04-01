#pragma once
#include "../Interfaces/Color.h"

class Blue : Color
{
public:
	Blue(WeaponComponent* baseComponent) : Color(baseComponent) {};
	int Fire() override;
};