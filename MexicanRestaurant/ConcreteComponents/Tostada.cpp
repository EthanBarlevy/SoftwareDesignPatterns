#include "Tostada.h"

Tostada::Tostada(float Flavor, float Price)
{
    flavor = Flavor;
    price = Price;
}

MR::Vector2* Tostada::JudgeDish()
{
    return new MR::Vector2(flavor, price);
}
