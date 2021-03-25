#pragma once
#include "Car.h"
class Toyota : public Car {
public:
	Toyota();
	~Toyota();

	float GetFuelCapacity();
	float GetFuelConsumption();
	float GetAvgSpeed(Weather w);
	const char* GetBrand();

	void SetFuelCapacity(float newFuelCapacity);
	void SetFuelConsumption(float newFuelConsumption);
	void SetAvgSpeed(Weather w, float newAvgSpeed);
};
