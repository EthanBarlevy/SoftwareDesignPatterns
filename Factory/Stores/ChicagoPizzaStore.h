#pragma once
#include "PizzaStore.h"

class ChicagoPizzaStore : public PizzaStore
{
protected:
	Pizza* CreatePizza(std::string type) override;
};