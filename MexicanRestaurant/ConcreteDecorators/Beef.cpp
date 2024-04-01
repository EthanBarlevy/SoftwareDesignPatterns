#include "Beef.h"

MR::Vector2* Beef::JudgeDish()
{
    return &(*Meat::JudgeDish() + MR::Vector2(15.0f, 1.0f));
}
