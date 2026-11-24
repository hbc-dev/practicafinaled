#include "SistemaMatriculas.h"
#include <string>
#include <map>
#include <set>
#include <iostream>

SistemaMatriculas::SistemaMatriculas(){

}

SistemaMatriculas::SistemaMatriculas(map<int, Estudiante> student,set<string> subject, map<string, set<int>> matri){

}

void SistemaMatriculas::altaEstudiante(int ident;string name){
    
    Estudiante Nuevo = Estudiante(ident,name);

    estudiantes[ident] = Nuevo;
}
