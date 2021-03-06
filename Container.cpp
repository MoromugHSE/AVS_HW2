#include "Container.h"

#include<cstdio>

//-------------------------------------------------
// Container constructor.
//-------------------------------------------------
Container::Container() {
    cont_ = new Transport *[kMaxSize];
}

//-------------------------------------------------
// Pushes element to the end of container.
//-------------------------------------------------
void Container::pushBack(Transport& tr) {
    cont_[size_++] = &tr;
}

//-------------------------------------------------
// Generates a container.
//-------------------------------------------------
Container *Container::generateContainer(int size) {
    Container *cont = new Container();
    Transport *tr;
    for (int i = 0; i < size; ++i) {
        tr = Transport::generateTransport();
        cont->pushBack(*tr);
    }
    return cont;
}

//-------------------------------------------------
// Reads a Constructor from file.
//-------------------------------------------------
Container *Container::readContainerFromFile(int size, FILE *const& fin) {
    Container *cont = new Container();
    Transport *tr;
    for (int i = 0; i < size; ++i) {
        tr = Transport::readTransportFromFile(fin);
        if (tr == nullptr) {
            delete cont;
            return nullptr;
        }
        cont->pushBack(*tr);
    }
    return cont;
}

//-------------------------------------------------
// Either creates a Constructor from file or generates it.
//-------------------------------------------------
Container *Container::createContainer(FILE *const& fin) {
    int size;
    fscanf(fin, "%d", &size);
    if (size < 0 || size > 10 * 1000) {
        return nullptr;
    }
    if (size <= 20) {
        return Container::readContainerFromFile(size, fin);
    } else {
        return Container::generateContainer(size);
    }
}

//-------------------------------------------------
// Finds average distance Transport in Container can ride.
//-------------------------------------------------
double Container::getAverageDistance() const {
    double aggregate_distance = 0;
    for (int i = 0; i < size_; ++i) {
        aggregate_distance += cont_[i]->getMaxDistance();
    }
    if (size_ == 0) {
        return 0;
    }
    return aggregate_distance / size_;
}

//----------------------------------------------------------------------------
// Removes from container all elements with max distance less than average.
//----------------------------------------------------------------------------
void Container::removeLesserThanAverage() {
    double average = getAverageDistance();
    int new_size = 0;
    for (int i = 0; i < size_; ++i) {
        if (cont_[i]->getMaxDistance() < average) {
            delete cont_[i];
        } else {
            cont_[new_size++] = cont_[i];
        }
        // If every element stays on its place, we don't nullify any pointers!
        if (i + 1 != new_size) {
            cont_[i] = nullptr;
        }
    }
    size_ = new_size;
}

//-------------------------------------------------
// Writes the Container to file.
//-------------------------------------------------
void Container::writeContainerToFile(FILE *const& fout) const {
    fprintf(fout, "There are %d elements in Container:\n", size_);
    for (int i = 0; i < size_; ++i) {
        fprintf(fout, "%d: ", i);
        cont_[i]->writeTransportToFile(fout);
    }
    fprintf(fout, "\n");
}

//-------------------------------------------------
// Container destructor.
//-------------------------------------------------
Container::~Container() {
    delete[] cont_;
}
