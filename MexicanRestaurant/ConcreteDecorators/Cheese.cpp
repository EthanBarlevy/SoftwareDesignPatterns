#include "Cheese.h"

MR::Vector2* Cheese::JudgeDish()
{
    return new MR::Vector2(*Addon::JudgeDish() + MR::Vector2(5.0f, 0.3f));
}

std::string Cheese::GetDescription()
{
    return Addon::GetDescription() + description;
}
