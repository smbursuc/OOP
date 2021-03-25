#include "Mercedes.h"

Mercedes::Mercedes() {
	fuelCapacity = 70, fuelConsumption = 11;
	avgSpeed[Sunny] = 200, avgSpeed[Snow] = 100, avgSpeed[Rain] = 120;
	brand = "Mercedes";
}

float Mercedes::GetFuelCapacity() { return fuelCapacity; }
float Mercedes::GetFuelConsumption() { return fuelConsumption; }
float Mercedes::GetAvgSpeed(Weather w) { return avgSpeed[w]; }
const char* Mercedes::GetBrand() { return brand; }

void Mercedes::SetFuelCapacity(float newFuelCapacity) {
	fuelCapacity = newFuelCapacity;
}

void Mercedes::SetFuelConsumption(float newFuelConsumption) {
	fuelConsumption = newFuelConsumption;
}

void Mercedes::SetAvgSpeed(Weather w, float newAvgSpeed) {
	avgSpeed[w] = newAvgSpeed;
}