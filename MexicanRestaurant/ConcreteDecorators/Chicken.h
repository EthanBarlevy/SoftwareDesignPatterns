#pragma once
#include "../Interfaces/Meat.h"

class Chicken : public Meat
{
public:
	Chicken(DishComponent* baseDish) : Meat(baseDish) {};
	MR::Vector2* JudgeDish() override;
};