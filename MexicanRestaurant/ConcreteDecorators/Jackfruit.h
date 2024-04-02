#pragma once
#include "../Interfaces/Meat.h"

class Jackfruit : public Meat
{
private:
	std::string description = ", using a great vegan alternative meat, jackfruit";
public:
	Jackfruit(DishComponent* baseDish) : Meat(baseDish) {};
	MR::Vector2* JudgeDish() override;
	std::string GetDescription() override;
};