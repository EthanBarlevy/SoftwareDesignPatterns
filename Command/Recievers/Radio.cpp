#include "Radio.h"

void Radio::On()
{
	std::cout << "Radio is on\n";
}

void Radio::Off()
{
	std::cout << "Radio is off\n";
}

void Radio::VolumeUp()
{
	volume++;
	std::cout << "Radio volume is: " << volume << std::endl;
}

void Radio::VolumeDown()
{
	volume--;
	std::cout << "Radio volume is: " << volume << std::endl;
}
