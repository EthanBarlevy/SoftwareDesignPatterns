#include "Margin.h"
#include <string>
Margin::Margin(int margin)
{
    marginUp = margin;
    marginRight = margin;
    marginDown = margin;
    marginLeft = margin;
}

Margin::Margin(int top, int bottom, int left, int right)
{
    marginUp = top;
    marginDown = bottom;
    marginLeft = left;
    marginRight = right;
}

std::string Margin::GetAttribute()
{
    return "Margin=" + std::to_string(marginUp) + " " + std::to_string(marginRight) + " " + std::to_string(marginDown) + " " + std::to_string(marginLeft);
}
