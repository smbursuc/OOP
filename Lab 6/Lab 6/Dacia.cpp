#include "Dacia.h"

Dacia::Dacia() {
	fuelCapacity = 50, fuelConsumption = 1000;
	avgSpeed[Sunny] = 160, avgSpeed[Snow] = 85, avgSpeed[Rain] = 100;
	brand = "Dacia";
}

float Dacia::GetFuelCapacity() { return fuelCapacity; }
float Dacia::GetFuelConsumption() { return fuelConsumption; }
float Dacia::GetAvgSpeed(Weather w) { return avgSpeed[w]; }
const char* Dacia::GetBrand() { return brand; }

void Dacia::SetFuelCapacity(float newFuelCapacity) {
	fuelCapacity = newFuelCapacity;
}

void Dacia::SetFuelConsumption(float newFuelConsumption) {
	fuelConsumption = newFuelConsumption;
}

void Dacia::SetAvgSpeed(Weather w, float newAvgSpeed) {
	avgSpeed[w] = newAvgSpeed;
}
