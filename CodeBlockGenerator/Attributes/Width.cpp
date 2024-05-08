#include "Width.h"
#include <string>

std::string Width::GetAttribute()
{
    return "Width=" + std::to_string(width) + " ";
}
