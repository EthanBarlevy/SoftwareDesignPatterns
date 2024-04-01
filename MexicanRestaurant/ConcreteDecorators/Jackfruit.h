#pragma once
#include "../Interfaces/Meat.h"

class Jackfruit : public Meat
{
public:
	Jackfruit(DishComponent* baseDish) : Meat(baseDish) {};
	MR::Vector2* JudgeDish() override;
};