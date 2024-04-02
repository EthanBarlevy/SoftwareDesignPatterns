#include "Jackfruit.h"

MR::Vector2* Jackfruit::JudgeDish()
{
    return new MR::Vector2(*Meat::JudgeDish() + MR::Vector2(15.0f, 1.5f));
}

std::string Jackfruit::GetDescription()
{
    return Meat::GetDescription() + description;
}
