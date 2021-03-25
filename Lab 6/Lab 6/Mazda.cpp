#include "Mazda.h"

Mazda::Mazda() {
	fuelCapacity = 60, fuelConsumption = 8;
	avgSpeed[Sunny] = 180, avgSpeed[Snow] = 100, avgSpeed[Rain] = 110;
	brand = "Mazda";
}

float Mazda::GetFuelCapacity() { return fuelCapacity; }
float Mazda::GetFuelConsumption() { return fuelConsumption; }
float Mazda::GetAvgSpeed(Weather w) { return avgSpeed[w]; }
const char* Mazda::GetBrand() { return brand; }

void Mazda::SetFuelCapacity(float newFuelCapacity) {
	fuelCapacity = newFuelCapacity;
}

void Mazda::SetFuelConsumption(float newFuelConsumption) {
	fuelConsumption = newFuelConsumption;
}

void Mazda::SetAvgSpeed(Weather w, float newAvgSpeed) {
	avgSpeed[w] = newAvgSpeed;
}