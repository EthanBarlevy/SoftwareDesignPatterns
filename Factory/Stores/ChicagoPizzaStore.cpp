#include "ChicagoPizzaStore.h"
#include "../Factories/ChicagoPizzaIngredientFactory.h"
#include "../Pizzas/CheesePizza.h"
#include "../Pizzas/MeatPizza.h"
#include "../Pizzas/VeggiePizza.h"
Pizza* ChicagoPizzaStore::CreatePizza(std::string type)
{
    Pizza* pizza = nullptr;
    IPizzaIngredientFactory* ingredientFactory = new ChicagoPizzaIngredientFactory();
    if (type == "veggie")
    {
        pizza = new VeggiePizza(ingredientFactory);
        pizza->SetName("Chicago Style Veggie Pizza");
        return pizza;
    }
    if (type == "cheese")
    {
        pizza = new VeggiePizza(ingredientFactory);
        pizza->SetName("Chicago Style Veggie Pizza");
        return pizza;
    }
    if (type == "meat")
    {
        pizza = new MeatPizza(ingredientFactory);
        pizza->SetName("Chicago Style Meat Pizza");
        return pizza;
    }
    return pizza;
}
