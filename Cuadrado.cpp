
#include "Coordenada.h"
#include <math.h>
#include<vector>
#include<iostream>
#include"Cuadrado.h"
using namespace std;
Cuadrado::Cuadrado() {}

void Cuadrado::imprimeEsq() {
    vector<Coordenada>::iterator ir;
    for (ir = vertices.begin(); ir != vertices.end(); ir++) {
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(3);
        cout << "x = " << (int)ir->obtenerX() << " y = " <<(int) ir->obtenerY() << endl;
    }
}

void Cuadrado::anadeVertice(double x, double y) {
    vertices.push_back(Coordenada(x, y));
}
