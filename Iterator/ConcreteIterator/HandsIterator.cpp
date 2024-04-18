#include "HandsIterator.h"

HandsIterator::HandsIterator(IItem* LeftHand, IItem* RightHand)
{
	this->LeftHand = LeftHand;
	this->RightHand = RightHand;
	index = 0;
}

IItem* HandsIterator::Current()
{
	switch (index)
	{
		case 0:
			return LeftHand;
		case 1:
			return RightHand;
	}
	return nullptr;
}

bool HandsIterator::HasNext()
{
	return index == 0 || index == 1;
}

void HandsIterator::Next()
{
	index++;
}
