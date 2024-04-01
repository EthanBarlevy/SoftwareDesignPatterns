#pragma once
#include "../Interfaces/Addon.h"

class Guacamole : public Addon
{
public:
	Guacamole(DishComponent* baseDish) : Addon(baseDish) {};
	MR::Vector2* JudgeDish() override;
};