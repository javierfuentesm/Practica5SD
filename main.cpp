#include <stdlib.h>
#include <iostream>
#include "PoligonoIrregular.h"

using namespace std;


int main() {
    PoligonoIrregular poligono;
    poligono.anadeVertice(0,0);
    poligono.anadeVertice(1,1);
    poligono.anadeVertice(1,2);
    poligono.anadeVertice(17,1);
    poligono.anadeVertice(0,-1);
    poligono.imprimeEsq();
    return 0;

    return 0;
}
