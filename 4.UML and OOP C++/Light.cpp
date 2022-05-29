#include "Light.h"

Light::Light() : mBulb(false){}

void Light::switchOnOff(const bool isOn) 
{
	mBulb = isOn;
	printStatus();
}

bool Light::getState() const
{
	return mBulb;
}

std::string Light::convertStatusToString()
{
	std::string result = "Off";
	if (mBulb)
	{
		result = "On";
	}
	return result;
}