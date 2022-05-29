#pragma once
#include "HeadLight.h"
class FogLight :
    public HeadLight
{
public:
    int neshtoSi;
protected:
    virtual void printStatus();
};

