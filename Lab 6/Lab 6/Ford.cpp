#include "Ford.h"

Ford::Ford() {
	fuelCapacity = 55, fuelConsumption = 2.4;
	avgSpeed[Sunny] = 130, avgSpeed[Snow] = 75, avgSpeed[Rain] = 90;
	brand = "Ford";
}

float Ford::GetFuelCapacity() { return fuelCapacity; }
float Ford::GetFuelConsumption() { return fuelConsumption; }
float Ford::GetAvgSpeed(Weather w) { return avgSpeed[w]; }
const char* Ford::GetBrand() { return brand; }

void Ford::SetFuelCapacity(float newFuelCapacity) {
	fuelCapacity = newFuelCapacity;
}

void Ford::SetFuelConsumption(float newFuelConsumption) {
	fuelConsumption = newFuelConsumption;
}

void Ford::SetAvgSpeed(Weather w, float newAvgSpeed) {
	avgSpeed[w] = newAvgSpeed;
}