#pragma once
#ifndef AVS_HW2_RANDOM_H
#define AVS_HW2_RANDOM_H

class Random {
public:
    static void initRandom();

    static int randomInt(int min, int max);

    static short int randomShortInt(short int min, short int max);

    static double randomDouble(double min, double max);

};

#endif //AVS_HW2_RANDOM_H
