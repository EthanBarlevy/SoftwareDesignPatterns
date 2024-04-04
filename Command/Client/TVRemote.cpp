#include "TVRemote.h"

IElectronicDevice* TVRemote::getDevice()
{
    return new Television();
}
