#include "Addon.h"

Addon::Addon(DishComponent* indishComponent)
{
    baseDish = indishComponent;
}

MR::Vector2* Addon::JudgeDish()
{
    return baseDish->JudgeDish();
}

std::string Addon::GetDescription()
{
    return baseDish->GetDescription();
}
