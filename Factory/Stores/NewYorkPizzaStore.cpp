#include "NewYorkPizzaStore.h"
#include "../Factories/ChicagoPizzaIngredientFactory.h"
#include "../Pizzas/CheesePizza.h"
#include "../Pizzas/VeggiePizza.h"
#include "../Pizzas/MeatPizza.h"
Pizza* NewYorkPizzaStore::CreatePizza(std::string type)
{
    Pizza* pizza = nullptr;
    IPizzaIngredientFactory* ingredientFactory = new ChicagoPizzaIngredientFactory();
    if (type == "veggie")
    {
        pizza = new VeggiePizza(ingredientFactory);
        pizza->SetName("New York Style Veggie Pizza");
        return pizza;
    }
    if (type == "cheese")
    {
        pizza = new VeggiePizza(ingredientFactory);
        pizza->SetName("New York Style Veggie Pizza");
        return pizza;
    }
    if (type == "meat")
    {
        pizza = new MeatPizza(ingredientFactory);
        pizza->SetName("New York Style Meat Pizza");
        return pizza;
    }
    return pizza;
}
