#include "Pizza.h"

std::vector<std::string>* Pizza::GetIngredients()
{
    std::vector<std::string>* ingredients = new std::vector<std::string>();
    if (dough)
    {
        ingredients->push_back(dough->GetName());
    }
    if (cheese)
    {
        ingredients->push_back(cheese->GetName());
    }
    if (sauce)
    {
        ingredients->push_back(sauce->GetName());
    }
    if (meats)
    {
        for (auto meat : *meats)
        {
            ingredients->push_back(meat->GetName());
        }
    }
    if (veggies)
    {
        for (auto veggie : *veggies)
        {
            ingredients->push_back(veggie->GetName());
        }
    }
    return ingredients;
}
