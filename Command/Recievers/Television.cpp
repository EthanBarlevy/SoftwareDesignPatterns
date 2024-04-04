#include "Television.h"

void Television::On()
{
	std::cout << "TV is on\n";
}

void Television::Off()
{
	std::cout << "TV is off\n";
}

void Television::VolumeUp()
{
	volume++;
	std::cout << "TV volume is: " << volume << std::endl;
}

void Television::VolumeDown()
{
	volume--;
	std::cout << "TV volume is: " << volume << std::endl;
}
