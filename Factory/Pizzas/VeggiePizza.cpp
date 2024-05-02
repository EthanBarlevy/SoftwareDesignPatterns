#include "VeggiePizza.h"

VeggiePizza::VeggiePizza(IPizzaIngredientFactory* ingredientFactory)
{
	this->ingredientFactory = ingredientFactory;
}

void VeggiePizza::Prepare()
{
	dough = ingredientFactory->CreateDough();
	sauce = ingredientFactory->CreateSauce();
	cheese = ingredientFactory->CreateCheese();
	veggies = ingredientFactory->CreateVeggies();
}
