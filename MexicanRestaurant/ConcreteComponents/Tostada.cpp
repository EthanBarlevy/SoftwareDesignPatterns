#include "Tostada.h"

Tostada::Tostada(float Flavor, float Price)
{
    flavor = Flavor;
    price = Price;
    description = "A flat and cripsy base";
}

MR::Vector2* Tostada::JudgeDish()
{
    return new MR::Vector2(flavor, price);
}

std::string Tostada::GetDescription()
{
    return description;
}
