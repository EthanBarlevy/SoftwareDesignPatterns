#pragma once
#include "../Interfaces/Addon.h"

class Guacamole : public Addon
{
private:
	std::string description = " extra rich and creamy";
public:
	Guacamole(DishComponent* baseDish) : Addon(baseDish) {};
	MR::Vector2* JudgeDish() override;
	std::string GetDescription() override;
};