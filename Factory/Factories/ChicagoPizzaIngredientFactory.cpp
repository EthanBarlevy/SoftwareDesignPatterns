#include "ChicagoPizzaIngredientFactory.h"
#include "../Ingredients/Ingredients.h"

IDough* ChicagoPizzaIngredientFactory::CreateDough()
{
    return new ThickCrustDough();
}

ISauce* ChicagoPizzaIngredientFactory::CreateSauce()
{
    return new PlumTomatoSauce();
}

ICheese* ChicagoPizzaIngredientFactory::CreateCheese()
{
    return new MotzerellaCheese();
}

std::vector<IVeggie*>* ChicagoPizzaIngredientFactory::CreateVeggies()
{
    return new std::vector<IVeggie*> {new BlackOlive(), new Spinach(), new Onion()};
}

std::vector<IMeat*>* ChicagoPizzaIngredientFactory::CreateMeat()
{
    return new std::vector<IMeat*>{ new Pepperoni(), new Sausage() };
}
