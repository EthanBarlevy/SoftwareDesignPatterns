#include <iostream>
#include "Includes.h"

int main()
{
    // Base Dishes
    // 
    //DishComponent* dish = new Taco(1.0f, 1.0f);
    DishComponent* dish = new Tostada(1.5f, 1.5f);
    //DishComponent* dish = new Burrito(1.0f, 2.0f);
    // 
    // Meats
    // 
    dish = new Beef(dish);
    //dish = new Chicken(dish);
    //dish = new Jackfruit(dish);
    //
    // Addons
    //
    dish = new Rice(dish);
    //dish = new Beans(dish);
    //dish = new Cheese(dish);
    //dish = new Guacamole(dish);

    MR::Vector2* Dish = dish->JudgeDish();

    std::cout << dish->GetDescription() << std::endl;
    std::cout << "Flavor score: " << Dish->x << "    Price: " << Dish->y << "$" << std::endl;
    if (Dish->x <= 15)
    {
        std::cout << "It tastes fine" << std::endl;
    }
    else if (Dish->x <= 20)
    {
        std::cout << "Pretty good" << std::endl;
    }
    else
    {
        std::cout << "Amazing dish" << std::endl;
    }
}