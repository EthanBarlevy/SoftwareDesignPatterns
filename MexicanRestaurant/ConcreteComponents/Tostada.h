#pragma once
#include "../Interfaces/DishComponent.h"

class Tostada : public DishComponent
{
private:
	float flavor;
	float price;
	std::string description;

public:
	Tostada(float Flavor, float Price);
	MR::Vector2* JudgeDish();
};