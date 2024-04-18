#pragma once
#include "../Interfaces/IItem.h"

class Map : public IItem
{
public:
	std::string* Name() override;
};