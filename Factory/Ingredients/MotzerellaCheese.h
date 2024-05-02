#pragma once
#include "../Interfaces/ICheese.h"
class MotzerellaCheese : public ICheese
{
public:
	std::string GetName() override;
};