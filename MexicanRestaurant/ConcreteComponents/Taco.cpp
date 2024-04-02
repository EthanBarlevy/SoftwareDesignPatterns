#include "Taco.h"

Taco::Taco(float Flavor, float Price)
{
    flavor = Flavor;
    price = Price;
    description = "A classic softshell taco";
}

MR::Vector2* Taco::JudgeDish()
{
    return new MR::Vector2(flavor, price);
}

std::string Taco::GetDescription()
{
    return description;
}
