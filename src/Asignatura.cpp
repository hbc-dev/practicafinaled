#include <iostream>
#include "Asignatura.h"

using namespace std;

Asignatura::Asignatura() {
    nombre = "";
}

Asignatura::Asignatura(string nom) {
    nombre = nom;
}

string Asignatura::getNombre() const {
    return nombre;
}