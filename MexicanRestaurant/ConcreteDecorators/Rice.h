#pragma once
#include "../Interfaces/Addon.h"

class Rice : public Addon
{
private:
	std::string description = ", with rice, adding not a lot of flavor but a lot of texture";
public:
	Rice(DishComponent* baseDish) : Addon(baseDish) {};
	MR::Vector2* JudgeDish() override;
	std::string GetDescription() override;
};