#include "Mod.h"

Mod::Mod(WeaponComponent* inbaseComponent)
{
	baseComponent = inbaseComponent;
}

int Mod::Fire()
{
	return baseComponent->Fire();
}
