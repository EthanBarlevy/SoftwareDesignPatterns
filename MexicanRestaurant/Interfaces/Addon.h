#pragma once
#include "DishComponent.h"

class Addon : public DishComponent
{
private:
	DishComponent* baseDish;

public:
	Addon(DishComponent* indishComponent);
	MR::Vector2* JudgeDish() override;
};