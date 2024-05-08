#pragma once
#include "../Interfaces/IAttribute.h"
class Height : public IAttribute
{
public:
	std::string GetAttribute() override;
	int height = 0;
};