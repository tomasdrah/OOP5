#include "Truck.h"

void Truck::AssemblyCar(int collorCode, int seats, int loadCapacity)
{
	AssemblyCar(collorCode, seats);
	this->loadCapacity = loadCapacity;
}
