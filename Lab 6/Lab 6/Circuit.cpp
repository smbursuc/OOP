#include "Circuit.h"

#include <iostream>

Circuit::Circuit() {}
void Circuit::SetLength(float _length) { length = _length; }
void Circuit::SetWeather(Weather _weather) { weather = _weather; }
void Circuit::AddCar(Car* car) { cars.push_back(car); }
void Circuit::Race() {
    int n = cars.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (cars[i]->GetAvgSpeed(weather) < cars[j]->GetAvgSpeed(weather)) {
                std::swap(cars[i], cars[j]);
            }
        }
    }
}
void Circuit::ShowFinalRanks() {
    std::cout << "Final Ranks\n";
    for (Car* car : cars)
        if (((car->GetFuelCapacity() * 100) / car->GetFuelConsumption()) >=
            length) {
            std::cout << ((length / car->GetAvgSpeed(weather)) * 100) << " minutes "
                << car->GetBrand() << " " << car->GetAvgSpeed(weather)
                << " km\\h" << std::endl;
        }

    std::cout << std::endl;
}
void Circuit::ShowWhoDidNotFinish() {
    std::cout << "Who Did Not Finish\n";
    for (Car* car : cars) {
        if (((car->GetFuelCapacity() * 100) / car->GetFuelConsumption()) < length) {
            std::cout << car->GetBrand() << " " << car->GetAvgSpeed(weather)
                << std::endl;
        }
    }
}