#pragma once
#include "ExteriorLight.h"
class HeadLight :
    public ExteriorLight
{
protected:
    virtual void printStatus() = 0;
};