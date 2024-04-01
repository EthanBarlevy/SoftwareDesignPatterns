#include "Rifle.h"

Rifle::Rifle(int indamage)
{
	damage = indamage;
}

int Rifle::Fire()
{
	return damage;
}
