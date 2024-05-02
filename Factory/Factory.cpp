#include <iostream>
#include "Stores/NewYorkPizzaStore.h"
#include "Stores/ChicagoPizzaStore.h"

static void PrintPizza(Pizza* pizza)
{
    std::cout << pizza->GetName() << std::endl;
    std::cout << "---------Ingredients----------\n";
    for (auto ingredient : *pizza->GetIngredients())
    {
        std::cout << ingredient;
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<Pizza*>* orderedPizzas = new std::vector<Pizza*>;
    PizzaStore* NewYorkPizzaStore = new NewYorkPizzaStore();
    orderedPizzas->push_back(NewYorkPizzaStore->OrderPizza("cheese"));
    orderedPizzas->push_back(NewYorkPizzaStore->OrderPizza("veggie"));
    orderedPizzas->push_back(NewYorkPizzaStore->OrderPizza("meat"));
    PizzaStore* ChicagoPizzaStore = new ChicagoPizzaStore();
    orderedPizzas->push_back(ChicagoPizzaStore->OrderPizza("cheese"));
    orderedPizzas->push_back(ChicagoPizzaStore->OrderPizza("veggie"));
    orderedPizzas->push_back(ChicagoPizzaStore->OrderPizza("meat"));

    for (auto pizza : *orderedPizzas)
    {
        PrintPizza(pizza);
    }
}
