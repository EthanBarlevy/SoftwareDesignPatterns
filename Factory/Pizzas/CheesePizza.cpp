#include "CheesePizza.h"

CheesePizza::CheesePizza(IPizzaIngredientFactory* ingredientFactory)
{
	this->ingredientFactory = ingredientFactory;
}

void CheesePizza::Prepare()
{
	dough = ingredientFactory->CreateDough();
	sauce = ingredientFactory->CreateSauce();
	cheese = ingredientFactory->CreateCheese();
}
