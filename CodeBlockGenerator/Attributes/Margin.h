#pragma once
#include "../Interfaces/IAttribute.h"
class Margin : public IAttribute
{
public:
	std::string GetAttribute() override;
	int marginUp = 0;
	int marginRight = 0;
	int marginDown = 0;
	int marginLeft = 0;
};