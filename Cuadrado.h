#ifndef CUADRADO
#define CUADRADO
#include <vector>
#include "Coordenada.h"

class Cuadrado {
private:
    std::vector<Coordenada> vertices;
public:
    Cuadrado();
    void anadeVertice(double x, double y);
    void imprimeEsq();
};

#endif 
