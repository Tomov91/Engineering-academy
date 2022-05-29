#include "FogLight.h"
#include "Blinkers.h"
#include "GloveBoxLight.h"
#include "ButtonLights.h"
#include "ExteriorLightController.h"
#include <iostream>

int main()
{
    Light* foglight = new FogLight();
    Light* blinkers = new Blinkers();
    Light* gloveboxLights = new GloveBoxLight();
    Light* buttonLights = new ButtonLight();
    foglight->switchOnOff(true);
    blinkers->switchOnOff(false);
    gloveboxLights->switchOnOff(true);
    buttonLights->switchOnOff(false);

    std::cout << "---------------------------------\n";

    ExteriorLightController* exteriorLightController = new ExteriorLightController();
    exteriorLightController->turnOnBlinkers();
    exteriorLightController->turnOffBlinkers();
    exteriorLightController->turnOnFogLight();
    exteriorLightController->turnOffFogLight();
}
