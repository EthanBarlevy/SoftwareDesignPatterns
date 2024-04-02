#include "Guacamole.h"

MR::Vector2* Guacamole::JudgeDish()
{
    return new MR::Vector2(*Addon::JudgeDish() + MR::Vector2(7.0f, 1.5f));
}

std::string Guacamole::GetDescription()
{
    return Addon::GetDescription() + description;
}
