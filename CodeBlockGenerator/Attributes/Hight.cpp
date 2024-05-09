#include "Hight.h"
#include <string>
Height::Height(int heigh)
{
    height = heigh;
}
std::string Height::GetAttribute()
{
    return "Height=" + std::to_string(height) + " ";
}
