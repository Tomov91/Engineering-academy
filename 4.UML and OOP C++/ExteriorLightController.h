#pragma once
#include "Light.h"
#include <vector>

class ExteriorLightController
{
private:
	// needs a virtual destructor
	std::vector<Light*> fogLights;
	std::vector<Light*> blinkers;
public:
	ExteriorLightController();
	void turnOnFogLight();
	void turnOffFogLight();
	void turnOnBlinkers();
	void turnOffBlinkers();

	~ExteriorLightController();
};

