#include "Beans.h"

MR::Vector2* Beans::JudgeDish()
{
    return &(*Addon::JudgeDish() + MR::Vector2(3.0f, 0.5f));
}
