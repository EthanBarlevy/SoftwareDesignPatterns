#pragma once
#include "../Interfaces/Mod.h"

class Barrel : public Mod
{
public:
	Barrel(WeaponComponent* baseComponent) : Mod(baseComponent) {};
	int Fire() override;
};