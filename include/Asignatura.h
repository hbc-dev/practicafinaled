#include <iostream>
#include <string>

class Asignatura {
    private: 
    /*
    *  
    */
    string nombre;

    public:
    /*
    * @brief Constructor por defecto.
    */
    Asignatura();
    /*
    * @brief Constructor.
    * @param nom el nombre de la asignatura.
    */
    Asignatura(string nom);
    /*
    * @brief Devuelve el nombre de la asignatura.
    */
    string getNombre() const;
};
