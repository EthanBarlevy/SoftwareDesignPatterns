#pragma once
#include "../Interfaces/DishComponent.h"

class Taco : public DishComponent
{
private:
	float flavor;
	float price;
	std::string description;

public:
	Taco(float Flavor, float Price);
	MR::Vector2* JudgeDish();
	std::string GetDescription() override;
};