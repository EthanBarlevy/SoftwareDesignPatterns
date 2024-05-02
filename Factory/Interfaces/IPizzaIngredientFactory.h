#pragma once
#include "./IDough.h"
#include "./ISauce.h"
#include "./ICheese.h"
#include "./IVeggie.h"
#include "./IMeat.h"
#include <vector>
class IPizzaIngredientFactory 
{
public:
	virtual IDough* CreateDough() { return new IDough(); }
	virtual ISauce* CreateSauce() { return new ISauce(); };
	virtual ICheese* CreateCheese() { return new ICheese(); };
	virtual std::vector<IVeggie*>* CreateVeggies() { return new std::vector<IVeggie*>(); };
	virtual std::vector<IMeat*>* CreateMeat() { return new std::vector<IMeat*>(); };
};