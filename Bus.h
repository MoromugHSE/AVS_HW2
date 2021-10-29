#pragma once
#ifndef AVS_HW2_BUS_H
#define AVS_HW2_BUS_H

#include "Transport.h"

#include<cstdio>

class Bus : Transport {
private:
    short int max_passengers_;

public:
    Bus(int volume, double fuel_100km, short int max_passengers);

    static Bus *readBusFromFile(FILE *const& fin);

    static Bus *generateBus();

    void writeBusToFile(FILE *const& fout) const;

    short int getMaxPassengers() const;
};

#endif //AVS_HW2_BUS_H
