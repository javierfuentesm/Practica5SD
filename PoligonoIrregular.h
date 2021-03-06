//
// Created by Javier Fuentes Mora on 11/02/20.
//

#ifndef PRACTICA5_POLIGONOIRREGULAR_H
#define PRACTICA5_POLIGONOIRREGULAR_H


#include <vector>
#include "Coordenada.h"

class Cuadrado {
private:

    std::vector<Coordenada> vertices;
public:
    Cuadrado	(std::vector<Coordenada> v);
    Cuadrado();
    void anadeVertice(double x, double y);
    void imprimeEsq();
    void ordenaVertices();
};

#endif 
