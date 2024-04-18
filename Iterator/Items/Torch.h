#pragma once
#include "../Interfaces/IItem.h"

class Torch : public IItem
{
public:
	std::string* Name() override;
};