#include "HTMLFactory.h"

std::vector<IAttribute*>* HTMLFactory::GetAttributes()
{
    return new std::vector<IAttribute*>{};
}
