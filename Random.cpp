#include "Random.h"

#include <cstdlib>
#include <ctime>

void Random::initRandom() {
    srand(time(nullptr));
}

int Random::randomInt(int min, int max) {
    return rand() % (max - min) + min;
}

short int Random::randomShort(short int min, short int max) {
    return rand() % (max - min) + min;
}

double Random::randomDouble(double min, double max) {
    return (double) rand() / RAND_MAX * (max - min) + min;
}
