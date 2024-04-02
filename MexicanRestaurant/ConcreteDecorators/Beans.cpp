#include "Beans.h"

MR::Vector2* Beans::JudgeDish()
{
    return new MR::Vector2(*Addon::JudgeDish() + MR::Vector2(3.0f, 0.5f));
}

std::string Beans::GetDescription()
{
    return Addon::GetDescription() + description;
}
