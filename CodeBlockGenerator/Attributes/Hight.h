#pragma once
#include "../Interfaces/IAttribute.h"
class Height : public IAttribute
{
public:
	Height(int heigh);
	std::string GetAttribute() override;
	int height = 0;
};