#include "Toyota.h"

Toyota::Toyota() {
	fuelCapacity = 30, fuelConsumption = 2;
	avgSpeed[Sunny] = 90, avgSpeed[Snow] = 60, avgSpeed[Rain] = 70;
	brand = "Toyota";
}

float Toyota::GetFuelCapacity() { return fuelCapacity; }
float Toyota::GetFuelConsumption() { return fuelConsumption; }
float Toyota::GetAvgSpeed(Weather w) { return avgSpeed[w]; }
const char* Toyota::GetBrand() { return brand; }

void Toyota::SetFuelCapacity(float newFuelCapacity) {
	fuelCapacity = newFuelCapacity;
}

void Toyota::SetFuelConsumption(float newFuelConsumption) {
	fuelConsumption = newFuelConsumption;
}

void Toyota::SetAvgSpeed(Weather w, float newAvgSpeed) {
	avgSpeed[w] = newAvgSpeed;
}