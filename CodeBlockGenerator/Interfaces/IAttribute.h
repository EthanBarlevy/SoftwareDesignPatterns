#pragma once
#include <iostream>

class IAttribute
{
public:
	virtual std::string GetAttribute() { return ""; }
};