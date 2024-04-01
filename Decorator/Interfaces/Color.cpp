#include "Color.h"

Color::Color(WeaponComponent* inbaseComponent)
{
	baseComponent = inbaseComponent;
}

int Color::Fire()
{
	return baseComponent->Fire();
}
