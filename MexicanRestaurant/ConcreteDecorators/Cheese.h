#pragma once
#include "../Interfaces/Addon.h"

class Cheese : public Addon
{
private:
	std::string description = ", with cheese, that has a wonderful flavor";
public:
	Cheese(DishComponent* baseDish) : Addon(baseDish) {};
	MR::Vector2* JudgeDish() override;
	std::string GetDescription() override;
};