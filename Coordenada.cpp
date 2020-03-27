
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
