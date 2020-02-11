//
// Created by Javier Fuentes Mora on 11/02/20.
//

#include "Coordenada.h"
Coordenada::Coordenada(double xx, double yy) : x(xx), y(yy)
{ }
double Coordenada::obtenerX()
{
    return x;
}

double Coordenada::obtenerY()
{
    return y;
}
