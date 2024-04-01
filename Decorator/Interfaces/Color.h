#pragma once
#include "WeaponComponent.h"

class Color : public WeaponComponent
{
private:
	WeaponComponent* baseComponent;

public:
	Color(WeaponComponent* inbaseComponent);
	int Fire() override;
};