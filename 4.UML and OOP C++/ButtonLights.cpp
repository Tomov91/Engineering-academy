#include "ButtonLights.h"
#include <iostream>

void ButtonLight::printStatus()
{
	std::cout << "The Glovebox Light is " << convertStatusToString() << std::endl;
}
