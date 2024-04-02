#include "Cheese.h"

MR::Vector2* Cheese::JudgeDish()
{
    return &(*Addon::JudgeDish() + MR::Vector2(5.0f, 0.3f));
}

std::string Cheese::GetDescription()
{
    return DishComponent::GetDescription() + description;
}
