#pragma once
#include "../Interfaces/ISauce.h"
#include "../Interfaces/IVeggie.h"
#include "../Interfaces/IMeat.h"
#include "../Interfaces/ICheese.h"
#include "../Interfaces/IDough.h"
#include <vector>
class Pizza
{
public:
	ISauce* sauce;
	std::vector<IVeggie*>* veggies;
	ICheese* cheese;
	std::vector<IMeat*>* meats;
	IDough* dough;
	std::string name;
public:
	virtual void Prepare() {};
	virtual std::string GetName() { return name; }
	virtual void SetName(std::string name) { this->name = name; }
	virtual std::vector<std::string>* GetIngredients();
};