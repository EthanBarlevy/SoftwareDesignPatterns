#pragma once
#include "../Interfaces/WeaponComponent.h"

class Pistol : public WeaponComponent
{
private:
	int damage;

public:
	Pistol(int indamage);
};