#pragma once

#include <vector>

#include "Car.h"
#include "Weather.h"

class Circuit {
protected:
	float length;
	Weather weather;
	std::vector<Car*> cars;
public:
	Circuit();
	void SetLength(float length);
	void SetWeather(Weather weather);
	void AddCar(Car* car);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};