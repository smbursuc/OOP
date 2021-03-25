#pragma once
#include "Weather.h"
class Car {
protected:
	float fuelCapacity, fuelConsumption;
	float* avgSpeed;
	const char* brand;

public:
	Car() { avgSpeed = new float[3]; };
	~Car() { delete[] avgSpeed; }

	virtual float GetFuelCapacity() = 0;
	virtual float GetFuelConsumption() = 0;
	virtual float GetAvgSpeed(Weather w) = 0;
	virtual const char* GetBrand() = 0;

	virtual void SetFuelCapacity(float newFuelCapacity) = 0;
	virtual void SetFuelConsumption(float newFuelConsumption) = 0;
	virtual void SetAvgSpeed(Weather w, float newAvgSpeed) = 0;
};
