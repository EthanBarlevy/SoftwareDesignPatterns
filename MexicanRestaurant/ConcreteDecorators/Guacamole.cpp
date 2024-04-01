#include "Guacamole.h"

MR::Vector2* Guacamole::JudgeDish()
{
    return &(*Addon::JudgeDish() + MR::Vector2(7.0f, 1.5f));
}
