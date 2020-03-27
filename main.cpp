#include <stdlib.h>
#include <iostream>
#include "Cuadrado.h"
#include <time.h>


using namespace std;

int main() {


    Cuadrado cuadradito;
    cuadradito.anadeVertice(4, 5);
    cuadradito.anadeVertice(4, 10);
    cuadradito.anadeVertice(8, 5);
    cuadradito.anadeVertice(8, 10);    
    cuadradito.imprimeEsq();

    return 0;


}
