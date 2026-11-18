#include <iostream>
#include "Asignatura.h"

using namespace std;


Asignatura :: Asignatura(){
    nombre = "";
}

Asignatura :: Asignatura(string NOM){
    nombre = NOM;
}

string Asignatura :: getNombre() const{
    return nombre;
}