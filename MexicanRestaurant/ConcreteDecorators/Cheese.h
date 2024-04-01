#pragma once
#include "../Interfaces/Addon.h"

class Cheese : public Addon
{
public:
	Cheese(DishComponent* baseDish) : Addon(baseDish) {};
	MR::Vector2* JudgeDish() override;
};