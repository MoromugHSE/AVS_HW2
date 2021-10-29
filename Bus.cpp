#include "Bus.h"
#include "Random.h"

Bus::Bus(int volume, double fuel_100km, short int max_passengers) : Transport(volume, fuel_100km) {
    max_passengers_ = max_passengers;
}

Bus *Bus::readBusFromFile(FILE *const& fin) {
    int volume;
    double fuel_100km;
    short int max_passengers;
    fscanf(fin, "%d %lf %hd", &volume, &fuel_100km, &max_passengers);
    if ((volume < 1 || volume > 200) ||
        (fuel_100km < 0 + 1e-9 || fuel_100km > 20) ||
        max_passengers < 1 || max_passengers > 40) {
        return nullptr;
    }
    return new Bus(volume, fuel_100km, max_passengers);
}

Bus *Bus::generateBus() {
    int volume = Random::randomInt(1, 201);
    double fuel_100km = Random::randomDouble(0 + 1e-9, 20);
    short int max_passengers = Random::randomShort(1, 41);
    return new Bus(volume, fuel_100km, max_passengers);
}

void Bus::writeBusToFile(FILE *const& fout) const {
    fprintf(fout, "Bus can take %hd people.", max_passengers_);
}

short int Bus::getMaxPassengers() const {
    return max_passengers_;
}
