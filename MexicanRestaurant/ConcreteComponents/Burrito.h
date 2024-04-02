#pragma once
#include "../Interfaces/DishComponent.h"

class Burrito : public DishComponent
{
private:
	float flavor;
	float price;
	std::string description;

public:
	Burrito(float Flavor, float Price);
	MR::Vector2* JudgeDish();
	std::string GetDescription() override;
};