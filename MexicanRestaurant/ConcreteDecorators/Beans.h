#pragma once
#include "../Interfaces/Addon.h"

class Beans : public Addon
{
public:
	Beans(DishComponent* baseDish) : Addon(baseDish) {};
	MR::Vector2* JudgeDish() override;
};