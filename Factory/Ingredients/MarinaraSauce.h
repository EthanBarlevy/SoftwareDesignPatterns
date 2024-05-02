#pragma once
#include "../Interfaces/ISauce.h"
class MarinaraSauce : public ISauce
{
public:
	std::string GetName() override;
};