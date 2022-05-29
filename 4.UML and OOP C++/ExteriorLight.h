#pragma once
#include "Light.h"

class ExteriorLight : public Light
{
protected:
	virtual void printStatus() = 0;
};

