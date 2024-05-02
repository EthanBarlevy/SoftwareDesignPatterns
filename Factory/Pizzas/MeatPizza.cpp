#include "MeatPizza.h"

MeatPizza::MeatPizza(IPizzaIngredientFactory* ingredientFactory)
{
	this->ingredientFactory = ingredientFactory;
}

void MeatPizza::Prepare()
{
	dough = ingredientFactory->CreateDough();
	sauce = ingredientFactory->CreateSauce();
	cheese = ingredientFactory->CreateCheese();
	meats = ingredientFactory->CreateMeat();
}
