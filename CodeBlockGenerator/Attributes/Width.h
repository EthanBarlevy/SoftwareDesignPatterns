#pragma once
#include "../Interfaces/IAttribute.h"
class Width : public IAttribute
{
public:
	Width(int wid);
	std::string GetAttribute() override;
	int width = 0;
};