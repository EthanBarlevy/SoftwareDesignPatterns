#pragma once
#include "../Interfaces/Meat.h"

class Chicken : public Meat
{
private:
	std::string description = ", using perfectly bland chicken, lets the spices shine";
public:
	Chicken(DishComponent* baseDish) : Meat(baseDish) {};
	MR::Vector2* JudgeDish() override;
	std::string GetDescription() override;
};