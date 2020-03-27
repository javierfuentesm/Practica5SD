#include "Triangulo.h"

Triangulo::Triangulo()
{

}

void Triangulo::imprimeEsq()
{
  cout << "x = " << uno.obtenerX() << " y = " << uno->obtenerY() << endl;
  cout << "x = " << dos.obtenerX() << " y = " << dos->obtenerY() << endl;
  cout << "x = " << tres.obtenerX() << " y = " << tres->obtenerY() << endl;

}
