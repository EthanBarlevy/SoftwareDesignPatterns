#pragma once
#include "../Interfaces/Addon.h"

class Rice : public Addon
{
public:
	Rice(DishComponent* baseDish) : Addon(baseDish) {};
	MR::Vector2* JudgeDish() override;
};