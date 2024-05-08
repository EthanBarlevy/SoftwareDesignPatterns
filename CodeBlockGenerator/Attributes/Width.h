#pragma once
#include "../Interfaces/IAttribute.h"
class Width : public IAttribute
{
public:
	std::string GetAttribute() override;
	int width = 0;
};