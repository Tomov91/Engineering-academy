#pragma once
#include <string>

class Light
{
private:
	bool mBulb;
public:
	Light();
	void switchOnOff (const bool isOn);
	bool getState() const;
protected:
	virtual void printStatus() = 0;
	std::string convertStatusToString();
};

