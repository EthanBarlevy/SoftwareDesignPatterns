#pragma once
#include "../vector2.h"
#include <iostream>

class DishComponent
{
public:
	virtual MR::Vector2* JudgeDish() { return new MR::Vector2(); }
	virtual std::string GetDescription() { return ""; }
};