#include "FogLight.h"
#include <iostream>

void FogLight::printStatus()
{
	std::cout << "The Fog Lights are " << convertStatusToString() << std::endl;
}
