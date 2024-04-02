#include "Burrito.h"

Burrito::Burrito(float Flavor, float Price)
{
    flavor = Flavor;
    price = Price;
    description = "A wrap of every ingredient";
}

MR::Vector2* Burrito::JudgeDish()
{
    return new MR::Vector2(flavor, price);
}

std::string Burrito::GetDescription()
{
    return description;
}
