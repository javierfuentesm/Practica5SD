#ifndef CIRCULO_H
#define CIRCULO_H


#include <vector>
#include "Coordenada.h"

class Circulo {
private:
  Coordenada uno;
  int radio;

public:
    Circulo();
    void imprimeCentro();
};

#endif