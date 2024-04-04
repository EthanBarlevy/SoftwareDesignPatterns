#include "RadioRemote.h"

IElectronicDevice* RadioRemote::getDevice()
{
    return new Radio();
}
