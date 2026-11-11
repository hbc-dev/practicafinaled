#include <iostream>
#include "Asignatura.h"

using namespace std;

class Asignatura {
    private: 

    string nombre;

    public:
    
    Asignatura();
    Asignatura(string nom);
};

Asignatura :: Asignatura(){
    nombre = "";
}

Asignatura :: Asignatura(string NOM){
    nombre = NOM;
}