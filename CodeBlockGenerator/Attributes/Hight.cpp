#include "Hight.h"
#include <string>
std::string Height::GetAttribute()
{
    return "Height=" + std::to_string(height) + " ";
}
