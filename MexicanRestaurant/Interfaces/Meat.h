#pragma once
#include "DishComponent.h"

class Meat : public DishComponent
{
private:
	DishComponent* baseDish;

public:
	Meat(DishComponent* indishComponent);
	MR::Vector2* JudgeDish() override;
	std::string GetDescription() override;
};