#include "Beef.h"

MR::Vector2* Beef::JudgeDish()
{
    return new MR::Vector2(*Meat::JudgeDish() + MR::Vector2(15.0f, 1.0f));
}

std::string Beef::GetDescription()
{
    return Meat::GetDescription() + description;
}
