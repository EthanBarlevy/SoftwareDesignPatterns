#include "Burrito.h"

Burrito::Burrito(float Flavor, float Price)
{
    flavor = Flavor;
    price = Price;
}

MR::Vector2* Burrito::JudgeDish()
{
    return new MR::Vector2(flavor, price);
}
