#include "Rice.h"

MR::Vector2* Rice::JudgeDish()
{
    return new MR::Vector2(*Addon::JudgeDish() + MR::Vector2(1.0f, 0.1f));
}

std::string Rice::GetDescription()
{
    return Addon::GetDescription() + description;
}
