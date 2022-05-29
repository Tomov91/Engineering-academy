#pragma once
#include "Light.h"

enum color
{
    RED
};

class InteriorLight :
    public Light
{
public:
    void adjustBrightness(int b);
    void changeColor(enum color);
protected:
    virtual void printStatus() = 0;
};

