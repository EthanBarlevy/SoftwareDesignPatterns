#pragma once
#include "../Interfaces/Mod.h"

class Scope : public Mod
{
public:
	Scope(WeaponComponent* baseComponent) : Mod(baseComponent) {};
	int Fire() override;
};