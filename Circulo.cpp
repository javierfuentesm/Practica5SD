#include "Circulo.h"

Circulo::Circulo()
{

}

void Circulo::imprimeCentro()
{
  cout << "x = " << centro.obtenerX() << " y = " << centro->obtenerY() << endl;
  cout << "radio = " << radio << endl;
}
