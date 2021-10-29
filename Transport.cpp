#include "Truck.h"
#include "Bus.h"
#include "Car.h"
#include "Random.h"

//-------------------------------------------------
// Transport constructor.
//-------------------------------------------------
Transport::Transport(int volume, double fuel_100km) {
    volume_ = volume;
    fuel_100km_ = fuel_100km;
}

//-------------------------------------------------
// Returns max distance a transport can ride.
//-------------------------------------------------
double Transport::getMaxDistance() const {
    return volume_ / fuel_100km_ * 100;
}

//-------------------------------------------------
// Generates a Transport.
//-------------------------------------------------
Transport *Transport::generateTransport() {
    switch (Random::randomInt(1, 4)) {
        case 1:
            return (Transport *) Truck::generateTruck();
        case 2:
            return (Transport *) Bus::generateBus();
        case 3:
            return (Transport *) Car::generateCar();
        default:
            return nullptr;
    }
}

//-------------------------------------------------
// Reads a Transport from file.
//-------------------------------------------------
Transport *Transport::readTransportFromFile(FILE *const& fin) {
    int k;
    fscanf(fin, "%d", &k);
    switch (k) {
        case 1:
            return (Transport *) Truck::readTruckFromFile(fin);
        case 2:
            return (Transport *) Bus::readBusFromFile(fin);
        case 3:
            return (Transport *) Car::readCarFromFile(fin);
        default:
            return nullptr;
    }
}

//-------------------------------------------------
// Writes the Transport to file.
//-------------------------------------------------
void Transport::writeTransportToFile(FILE *const& fout) const {
    fprintf(fout, "This Transport has a volume of %d and needs %lf fuel for 100 km. ",
            this->volume_, this->fuel_100km_);
    if ((Truck *) this != nullptr) {
        fprintf(fout, "This is a Truck. ");
        ((Truck *) this)->writeTruckToFile(fout);
    } else if ((Bus *) this != nullptr) {
        fprintf(fout, "This is a Bus. ");
        ((Bus *) this)->writeBusToFile(fout);
    } else if ((Car *) this != nullptr) {
        fprintf(fout, "This is a Car. ");
        ((Car *) this)->writeCarToFile(fout);
    }
    fprintf(fout, "\n");
}
