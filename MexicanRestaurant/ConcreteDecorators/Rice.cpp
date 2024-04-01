#include "Rice.h"

MR::Vector2* Rice::JudgeDish()
{
    return &(*Addon::JudgeDish() + MR::Vector2(1.0f, 0.1f));
}
