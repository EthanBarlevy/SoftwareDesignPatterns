#include "Pistol.h"

Pistol::Pistol(int indamage)
{
	damage = indamage;
}

int Pistol::Fire()
{
	return damage;
}
