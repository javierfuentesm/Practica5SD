//
// Created by Javier Fuentes Mora on 11/02/20.
//

#include "Coordenada.h"
#include <math.h>

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
double Coordenada ::magnitud()
{
    double magnitud;
    magnitud = x*x + y*y;
    magnitud = sqrt(magnitud);
    return magnitud;
}
