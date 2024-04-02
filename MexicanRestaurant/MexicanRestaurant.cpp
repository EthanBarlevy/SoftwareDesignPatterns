#include <iostream>
#include "Includes.h"

int main()
{
    // Base Dishes
    DishComponent* dish = new Taco(5.0f, 1.0f);
    //DishComponent* dish = new Tostada(5.0f, 1.5f);
    //DishComponent* dish = new Burrito(5.0f, 2.0f);
    // 
    // Meats
    // 
    //dish = new Beef(dish);
    //dish = new Chicken(dish);
    dish = new Jackfruit(dish);
    //
    // Addons
    //
    //dish = new Rice(dish);
    //dish = new Beans(dish);
    //dish = new Cheese(dish);
    dish = new Guacamole(dish);


    std::cout << dish->GetDescription() << std::endl;
    std::cout << dish->JudgeDish() << std::endl;
}