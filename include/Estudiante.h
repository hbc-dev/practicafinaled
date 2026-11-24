#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std:

class Estudiante{

private:

    int id;
    string nombre;

public:
    //**
    // @brief Constructor por defecto
    // */
    Estudiante();
    //**
    // @brief Constructor con parametros
    // @param id es el numero de identificacion que tiene cada estudiante
    // @param nombre es el nombre del estudiante
    //  */
    Estudiante(int id,const string& nombre);

    //*
    // @brief Devielve el numero de identificacion del estudiante 
    // */
    int getId();
    //**
    // @brief Devuelve el nombre del estudiante
    //  */
    string getNombre() const;

    //**
    // @brief Imprime por pantalla los datos de la clase Estudiante
    //  */
    void mostrar() const ;
    

};
