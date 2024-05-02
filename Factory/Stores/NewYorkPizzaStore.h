#pragma once
#include "PizzaStore.h"

class NewYorkPizzaStore : public PizzaStore
{
protected:
	Pizza* CreatePizza(std::string type) override;
};