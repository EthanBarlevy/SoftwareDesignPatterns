#pragma once
#include "../Interfaces/Addon.h"

class Beans : public Addon
{
private:
	std::string description = ", with a lumpy mush of beans";
public:
	Beans(DishComponent* baseDish) : Addon(baseDish) {};
	MR::Vector2* JudgeDish() override;
	std::string GetDescription() override;
};