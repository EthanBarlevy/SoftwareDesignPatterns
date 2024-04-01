#pragma once
#include "../Interfaces/WeaponComponent.h"

class Rifle : public WeaponComponent
{
private:
	int damage;

public:
	Rifle(int indamage);
	int Fire() override;
};