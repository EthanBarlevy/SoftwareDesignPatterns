#pragma once
#include "Pizza.h"
#include "../Interfaces/IPizzaIngredientFactory.h"
class CheesePizza : public Pizza
{
public:
	CheesePizza(IPizzaIngredientFactory* ingredientFactory);
	void Prepare() override;
private:
	IPizzaIngredientFactory* ingredientFactory;
};