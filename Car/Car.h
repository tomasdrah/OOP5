#pragma once
class Car
{
public:
	int mileage;
	int seats;
	void AssemblyCar(int collorCode,int seats);
	void ChangeCollor(int collorCode);
private:
	int collorCode;

};


