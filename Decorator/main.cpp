#include <iostream>;
#include "ConcreteComponnets/Pistol.h"
#include "ConcreteDecorator/Scope.h"
#include "ConcreteDecorator/Barrel.h"
#include "ConcreteDecorator/Blue.h"

using namespace std;

int main()
{
	WeaponComponent* gun = new Pistol(5);
	gun = new Scope(gun);
	gun = new Barrel(gun);
	gun = new Color(gun);

	cout << "The gun did " << gun->Fire() << " damage";
	return 0;
}