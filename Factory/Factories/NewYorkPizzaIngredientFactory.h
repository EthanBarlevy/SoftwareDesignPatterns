#pragma once
#include "../Interfaces/IPizzaIngredientFactory.h"
class NewYorkPizzaIngredientFactory : public IPizzaIngredientFactory
{
public:
	IDough* CreateDough() override;
	ISauce* CreateSauce() override;
	ICheese* CreateCheese() override;
	std::vector<IVeggie*>* CreateVeggies() override;
	std::vector<IMeat*>* CreateMeat() override;
};