#include "Chicken.h"

MR::Vector2* Chicken::JudgeDish()
{
    return &(*Meat::JudgeDish() + MR::Vector2(10.0f, 0.7f));
}
