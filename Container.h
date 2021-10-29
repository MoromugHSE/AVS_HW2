#pragma once
#ifndef AVS_HW2_CONTAINER_H
#define AVS_HW2_CONTAINER_H

#include "Transport.h"

#include <cstdio>

class Container {
private:
    static constexpr int kMaxSize = 10 * 1000;
    int size_ = 0;
    Transport **cont_;

public:
    Container();

    void pushBack(Transport& tr);

    static Container *generateContainer(int size);

    static Container *readContainerFromFile(int size, FILE *const& fin);

    static Container *createContainer(FILE *const& fin);

    double getAverageDistance() const;

    void removeLesserThanAverage();

    void writeContainerToFile(FILE *const& fout) const;

    ~Container();
};

#endif //AVS_HW2_CONTAINER_H
