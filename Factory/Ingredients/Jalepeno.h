#pragma once
#include "../Interfaces/IVeggie.h"
class Jalepeno : public IVeggie
{
public:
	std::string GetName() override;
};