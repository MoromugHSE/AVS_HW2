#include "Truck.h"
#include "Random.h"

Truck::Truck(int volume, double fuel_100km, int max_mass) : Transport(volume, fuel_100km) {
    max_mass_ = max_mass;
}

Truck *Truck::readTruckFromFile(FILE *const& fin) {
    int volume, max_mass;
    double fuel_100km;
    fscanf(fin, "%d %lf %d", &volume, &fuel_100km, &max_mass);
    if ((volume < 1 || volume > 200) ||
        (fuel_100km < 0 + 1e-9 || fuel_100km > 20) ||
        (max_mass < 1 || max_mass > 1000)) {
        return nullptr;
    }
    return new Truck(volume, fuel_100km, max_mass);
}

Truck *Truck::generateTruck() {
    int volume = Random::randomInt(1, 201);
    double fuel_100km = Random::randomDouble(0 + 1e-9, 20);
    int max_mass = Random::randomInt(1, 1001);
    return new Truck(volume, fuel_100km, max_mass);
}

void Truck::writeTruckToFile(FILE *const& fout) const {
    fprintf(fout, "Truck can take %d kg.", max_mass_);
}

int Truck::getMaxMass() const {
    return max_mass_;
}
