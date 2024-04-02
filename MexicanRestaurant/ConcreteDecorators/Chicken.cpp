#include "Chicken.h"

MR::Vector2* Chicken::JudgeDish()
{
    return new MR::Vector2(*Meat::JudgeDish() + MR::Vector2(10.0f, 0.7f));
}

std::string Chicken::GetDescription()
{
    return Meat::GetDescription() + description;
}
