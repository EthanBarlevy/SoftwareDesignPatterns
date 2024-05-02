#pragma once
#include "Pizza.h"
#include "../Interfaces/IPizzaIngredientFactory.h"
class VeggiePizza : public Pizza
{
public:
	VeggiePizza(IPizzaIngredientFactory* ingredientFactory);
	void Prepare() override;
private:
	IPizzaIngredientFactory* ingredientFactory;
};