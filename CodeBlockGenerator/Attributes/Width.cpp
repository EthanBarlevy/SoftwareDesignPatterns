#include "Width.h"
#include <string>

Width::Width(int wid)
{
    width = wid;
}

std::string Width::GetAttribute()
{
    return "Width=" + std::to_string(width) + " ";
}
