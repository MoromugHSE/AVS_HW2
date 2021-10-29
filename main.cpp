#include "Container.h"

#include<cstdio>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Incorrect arguments format!\n"
               "Correct:\n"
               "AVS_HW1 in_file out_file\n");
        return 0;
    }
    FILE *fin = fopen(argv[1], "r");
    if (fin == nullptr) {
        printf("File %s is unavailable to read from!\n", argv[1]);
        return 0;
    }
    FILE *fout = fopen(argv[2], "w");
    if (fout == nullptr) {
        printf("File %s is unavailable to write to!", argv[2]);
        return 0;
    }
    Container *cont = Container::createContainer(fin);
    if (cont == nullptr) {
        printf("Bad input file!\n");
        fprintf(fout, "Bad input file!");
        return 0;
    }
    fprintf(fout, "Container before changes:\n");
    cont->writeContainerToFile(fout);
    cont->removeLesserThanAverage();
    fprintf(fout, "Container after changes:\n");
    cont->writeContainerToFile(fout);
    delete cont;
    return 0;
}
