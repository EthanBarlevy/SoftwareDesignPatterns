#include "Meat.h"

Meat::Meat(DishComponent* indishComponent)
{
    baseDish = indishComponent;
}

MR::Vector2* Meat::JudgeDish()
{
    return baseDish->JudgeDish();
}
