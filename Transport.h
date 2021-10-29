#pragma once
#ifndef AVS_HW2_TRANSPORT_H
#define AVS_HW2_TRANSPORT_H

#include <cstdio>

class Transport {
private:
    int volume_;
    double fuel_100km_;

public:
    Transport(int volume, double fuel_100km);

    double getMaxDistance() const;

    static Transport *readTransportFromFile(FILE *const& fin);

    static Transport *generateTransport();

    void writeTransportToFile(FILE *const& fout) const;
};

#endif //AVS_HW2_TRANSPORT_H
