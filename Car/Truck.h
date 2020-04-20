#pragma once
#include "Car.h"

class Truck:public Car
{
public:
	int loadCapacity;
	void AssemblyCar(int collorCode, int seats,int loadCapacity);
private:

};

