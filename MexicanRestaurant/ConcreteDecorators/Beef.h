#pragma once
#include "../Interfaces/Meat.h"

class Beef : public Meat
{
private:
	std::string description = "rich and meaty";
public:
	Beef(DishComponent* baseDish) : Meat(baseDish) {};
	MR::Vector2* JudgeDish() override;
	std::string GetDescription() override;
};