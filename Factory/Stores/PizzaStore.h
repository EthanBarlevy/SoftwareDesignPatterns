#pragma once
#include "../Pizzas/Pizza.h"

class PizzaStore
{
protected:
	virtual Pizza* CreatePizza(std::string type) {};
public:
	Pizza* OrderPizza(std::string type) 
	{ 
		Pizza* pizza = new Pizza(); 
		pizza = CreatePizza(type);
		pizza->Prepare();
		return pizza;
	}
};