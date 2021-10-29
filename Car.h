#pragma once
#ifndef AVS_HW2_CAR_H
#define AVS_HW2_CAR_H

#include "Transport.h"

#include <cstdio>

class Car : Transport {
private:
    short int max_speed_;

public:
    Car(int volume, double fuel_100km, short int max_speed);

    static Car *readCarFromFile(FILE *const& fin);

    static Car *generateCar();

    void writeCarToFile(FILE *const& fout) const;
};

#endif //AVS_HW2_CAR_H
