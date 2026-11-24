#include <iostream>
#include "Estudiante.h"

Estudiante::Estudiante() {
    id = -1;
    nombre = "";
}

Estudiante::Estudiante(int ident, const string& nom) {
    id = ident;
    nombre = nom;
}

int Estudiante::getId() const {
    return id;
}

string Estudiante::getNombre() const {
    return nombre;
}

void Estudiante::mostrar() {
    cout << "Estudiante : " << nombre << endl;
    cout << "Id : " << id <<endl;
}
