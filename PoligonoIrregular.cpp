//
// Created by Javier Fuentes Mora on 11/02/20.
//

#include "PoligonoIrregular.h"

#include <iostream>
#include<vector>

using namespace std;

PoligonoIrregular::PoligonoIrregular(std::vector<Coordenada> v) {
    vertices = v;
}

PoligonoIrregular::PoligonoIrregular() {}

void PoligonoIrregular::imprimeEsq() {
    cout << "dentro de imprimeEsq" << endl;
    for (int i = 0; i < vertices.size(); i++) {
        cout << "Para el vertice " << i << ":" << endl;
        cout << "x = " << vertices[i].obtenerX() << " y = " << vertices[i].obtenerY() << endl;
    }
}

void PoligonoIrregular::anadeVertice(int x, int y) {
    vertices.push_back(Coordenada(x, y));
}
