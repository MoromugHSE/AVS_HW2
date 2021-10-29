#include "Random.h"

#include <cstdlib>
#include <ctime>

//-------------------------------------------------
// Seeds random to current time.
//-------------------------------------------------
void Random::initRandom() {
    srand(time(nullptr));
}

//-------------------------------------------------
// Returns a random int in given boundaries.
//-------------------------------------------------
int Random::randomInt(int min, int max) {
    return rand() % (max - min) + min;
}

//-------------------------------------------------
// Returns a random short int in given boundaries.
//-------------------------------------------------
short int Random::randomShortInt(short int min, short int max) {
    return rand() % (max - min) + min;
}

//-------------------------------------------------
// Returns a random double in given boundaries.
//-------------------------------------------------
double Random::randomDouble(double min, double max) {
    return (double) rand() / RAND_MAX * (max - min) + min;
}
