#pragma once
#include "../Interfaces/ISauce.h"
class PlumTomatoSauce : public ISauce
{
public:
	std::string GetName() override;
};