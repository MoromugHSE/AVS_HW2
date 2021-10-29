#pragma once
#ifndef AVS_HW2_TRUCK_H
#define AVS_HW2_TRUCK_H

#include "Transport.h"

#include <cstdio>

class Truck : Transport {
private:
    int max_mass_;

public:
    Truck(int volume, double fuel_100km, int max_mass);

    static Truck *readTruckFromFile(FILE *const& fin);

    static Truck *generateTruck();

    void writeTruckToFile(FILE *const& fout) const;
};

#endif //AVS_HW2_TRUCK_H
