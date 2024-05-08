#pragma once
#include "../Interfaces/ICodeBlockFactory.h"
class HTMLFactory : public ICodeBlockFactory
{
public:
	std::vector<IAttribute*>* GetAttributes() override;
};