//
// Created by Javier Fuentes Mora on 11/02/20.
//

#include "PoligonoIrregular.h"
#include <iostream>
#include<vector>
#include <iterator>

using namespace std;

PoligonoIrregular::PoligonoIrregular(std::vector<Coordenada> v) {
    vertices = v;
}

PoligonoIrregular::PoligonoIrregular() {}

void PoligonoIrregular::imprimeEsq() {
    std::vector<Coordenada>::iterator ir;
    for (ir = vertices.begin(); ir != vertices.end(); ir++) {
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(3);
        cout << "x = " << ir->obtenerX() << " y = " << ir->obtenerY() << " Magnitud:"<< ir->magnitud() << endl;
    }
    cout<< "-----------"<< endl;

    for (int i = 0; i < vertices.size(); ++i) {
        cout << "x = " << vertices[i].obtenerX() << " y = " << vertices[i].obtenerY() << " Magnitud:"<< vertices[i].magnitud() << endl;

    }
}

void PoligonoIrregular::anadeVertice(double x, double y) {
    vertices.push_back(Coordenada(x, y));
}
