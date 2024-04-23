#include "FamilyIterator.h"

FamilyIterator::FamilyIterator(std::vector<IFamilyGroup*>* inventory)
{
    family = inventory;
}

IFamilyGroup* FamilyIterator::Current()
{
    return family->at(index);
}

bool FamilyIterator::HasNext()
{
    return index < family->size();
}

void FamilyIterator::Next()
{
    index++;
}
