#include "NewYorkPizzaIngredientFactory.h"
#include "../Ingredients/Ingredients.h"
IDough* NewYorkPizzaIngredientFactory::CreateDough()
{
    return new ThinCrustDough();
}

ISauce* NewYorkPizzaIngredientFactory::CreateSauce()
{
    return new MarinaraSauce();
}

ICheese* NewYorkPizzaIngredientFactory::CreateCheese()
{
    return new RegianoCheese();
}

std::vector<IVeggie*>* NewYorkPizzaIngredientFactory::CreateVeggies()
{
    return new std::vector<IVeggie*>{ new BlackOlive(), new Onion(), new Mushroom(), new RedPepper()};
}

std::vector<IMeat*>* NewYorkPizzaIngredientFactory::CreateMeat()
{
    return new std::vector<IMeat*>{ new Pepperoni(), new Sausage(), new Ham() };
}
