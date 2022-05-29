#pragma once
#include "ExteriorLight.h"
class Blinkers :
    public ExteriorLight
{
protected:
    virtual void printStatus() override;
};

