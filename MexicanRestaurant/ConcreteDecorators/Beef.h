#pragma once
#include "../Interfaces/Meat.h"

class Beef : public Meat
{
public:
	Beef(DishComponent* baseDish) : Meat(baseDish) {};
	MR::Vector2* JudgeDish() override;
};