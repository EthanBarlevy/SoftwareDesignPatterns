#include "Taco.h"

Taco::Taco(float Flavor, float Price)
{
    flavor = Flavor;
    price = Price;
}

MR::Vector2* Taco::JudgeDish()
{
    return new MR::Vector2(flavor, price);
}
