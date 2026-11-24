#include <iostream>
#include "Estudiante.h"
    
Estudiante :: Estudiante(){
    id = -1;
    nombre = "";
}

Estudiante :: Estudiante(int ident,const string& nom ){
    id = ident;
    nombre = nom;
}

void Estudiante ::getId(){
    return id;
}

void Estudiante ::getNombre(){
    return nombre;
}

void Estudiante::mostrar(){
    cout << "Estudiante : " << nombre << endl;
    cout << "Id : " << id <<endl;
}
