#include "SistemaMatriculas.h"
#include "Estudiante.h"
#include <string>
#include <map>
#include <set>
#include <iostream>

SistemaMatriculas::SistemaMatriculas(){

}

SistemaMatriculas::SistemaMatriculas(map<int, Estudiante> student,set<string> subject, map<string, set<int>> matri){

}

void SistemaMatriculas::altaEstudiante(int iden, const string& name){
    
    Estudiante Nuevo = Estudiante(iden, name);

    estudiantes[iden] = Nuevo;
}
