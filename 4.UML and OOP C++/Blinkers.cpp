#include "Blinkers.h"
#include <iostream>

void Blinkers::printStatus()
{
	std::cout << "The Blinkers are " << convertStatusToString() << std::endl;
}
