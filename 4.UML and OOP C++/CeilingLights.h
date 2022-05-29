#pragma once
#include "InteriorLight.h"
class CeilingLights :
    public InteriorLight
{
protected:
    virtual void printStatus() = 0;
};

