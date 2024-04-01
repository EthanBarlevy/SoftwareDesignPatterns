#pragma once
#include "WeaponComponent.h"

class Mod : public WeaponComponent
{
private:
	WeaponComponent* baseComponent;

public:
	Mod(WeaponComponent* inbaseComponent);
	int Fire() override;
};