#include "Addon.h"

Addon::Addon(DishComponent* indishComponent)
{
    baseDish = indishComponent;
}

MR::Vector2* Addon::JudgeDish()
{
    return baseDish->JudgeDish();
}
