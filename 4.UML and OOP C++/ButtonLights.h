#pragma once
#include "InteriorLight.h"
class ButtonLight :
    public InteriorLight
{
protected:
    virtual void printStatus();
};

