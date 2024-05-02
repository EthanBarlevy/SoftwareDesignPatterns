#pragma once
#include "Pizza.h"
#include "../Interfaces/IPizzaIngredientFactory.h"
class MeatPizza : public Pizza
{
public:
	MeatPizza(IPizzaIngredientFactory* ingredientFactory);
	void Prepare() override;
private:
	IPizzaIngredientFactory* ingredientFactory;
};