#include <stdlib.h>
#include <iostream>
#include "PoligonoIrregular.h"
#include <time.h>


using namespace std;

double GenerateRandom(double min, double max) {
    static bool first = true;
    if (first) {
        srand(time(NULL));
        first = false;
    }
    if (min > max) {
        std::swap(min, max);
    }
    return min + (double) rand() * (max - min) / (double) RAND_MAX;
}

int main() {


    PoligonoIrregular poligono;
    int n = 10;
    for (int i = 0; i < n; ++i) {
        double random1 = GenerateRandom(-100, 100);
        double random2 = GenerateRandom(-100, 100);
        poligono.anadeVertice(random1, random2);
    }

    poligono.imprimeEsq();
    return 0;


}
