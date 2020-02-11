//
// Created by Javier Fuentes Mora on 11/02/20.
//

#ifndef PRACTICA5_POLIGONOIRREGULAR_H
#define PRACTICA5_POLIGONOIRREGULAR_H


#include <vector>
#include "Coordenada.h"

class PoligonoIrregular {
private:

    std::vector<Coordenada> vertices;
public:
    PoligonoIrregular(std::vector<Coordenada> v);
    PoligonoIrregular();
    void anadeVertice(int x, int y);
    void imprimeEsq();
};

#endif //PRACTICA5_POLIGONOIRREGULAR_H
