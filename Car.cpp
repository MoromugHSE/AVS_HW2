#include "Car.h"
#include "Random.h"

//-------------------------------------------------
// Car constructor.
//-------------------------------------------------
Car::Car(int volume, double fuel_100km, short int max_speed) : Transport(volume, fuel_100km) {
    max_speed_ = max_speed;
}

//-------------------------------------------------
// Reads a Car from file.
//-------------------------------------------------
Car *Car::readCarFromFile(FILE *const& fin) {
    int volume;
    double fuel_100km;
    short int max_speed;
    fscanf(fin, "%d %lf %hd", &volume, &fuel_100km, &max_speed);
    if ((volume < 1 || volume > 200) ||
        (fuel_100km < 0 + 1e-9 || fuel_100km > 20) ||
        max_speed < 1 || max_speed > 100) {
        return nullptr;
    }
    return new Car(volume, fuel_100km, max_speed);
}

//-------------------------------------------------
// Generates a Car.
//-------------------------------------------------
Car *Car::generateCar() {
    int volume = Random::randomInt(1, 201);
    double fuel_100km = Random::randomDouble(0 + 1e-9, 20);
    short int max_speed = Random::randomShortInt(1, 101);
    return new Car(volume, fuel_100km, max_speed);
}

//-------------------------------------------------
// Writes the Car to file.
//-------------------------------------------------
void Car::writeCarToFile(FILE *const& fout) const {
    fprintf(fout, "Car can speed up to %hd km.", max_speed_);
}
