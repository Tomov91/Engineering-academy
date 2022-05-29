#include "ExteriorLightController.h"
#include "FogLight.h"
#include "Blinkers.h"

ExteriorLightController::ExteriorLightController() 
{
	for (int i = 0; i < 4; i++)
	{
		Light* ptr = new FogLight();
		fogLights.push_back(ptr);
	}

	for (int i = 0; i < 6; i++)
	{
		Light* ptr = new Blinkers();
		blinkers.push_back(ptr);
	}
}

void ExteriorLightController::turnOnFogLight()
{
	for (int i = 0; i < fogLights.size(); i++)
	{
		fogLights[i]->switchOnOff(true);
	}
}

void ExteriorLightController::turnOffFogLight()
{
	for (int i = 0; i < fogLights.size(); i++)
	{
		fogLights[i]->switchOnOff(false);
	}
}

void ExteriorLightController::turnOnBlinkers()
{
	for (int i = 0; i < 6; i++)
	{
		blinkers[i]->switchOnOff(true);
	}
}

void ExteriorLightController::turnOffBlinkers()
{
	for (int i = 0; i < 6; i++)
	{
		blinkers[i]->switchOnOff(false);
	}
}

ExteriorLightController::~ExteriorLightController() 
{
	for (int i = 0; i < 4; i++)
	{
		delete fogLights[i];
	}

	for (int i = 0; i < 6; i++)
	{
		delete blinkers[i];
	}
};
