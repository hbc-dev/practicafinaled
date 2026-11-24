#include <iostream>
#include <string>
#include <map>
#include <set>
#include "Asignatura.h"
#include "Estudiante.h"

using namespace std:

class SistemaMatriculas{
private:
    map<int, Estudiante> estudiantes;
    set<string> asignaturas;
    map<string, set<int>> matriculas;

public:

    SistemaMatriculas();
    SistemaMatriculas(map<int, Estudiante> student,set<string> subject, map<string, set<int>> matri);

        /* ----- Gestión de estudiantes ----- */
    //**
    // @brief Crea un nuevo estudiante y lo asigna a estudiantes
    // @param id numero de identificacion para el nuevo estudiante
    // @param nombre del nuevo estudiante  
    // */
    void altaEstudiante(int id, const string& nombre);

    //* 
    // @brief Elimina el estudiante de identificador id de estudiantes
    // @param id numero de identificacion del estudiante que va a se eleminado
    // */
    void bajaEstudiante(int id) ;
    /* ----- Gestión de asignaturas ----- */
     //**
    // @brief Crea una nueva asignatura y lo asigna a asignaturas
    // @param nombre de la nueva asignatura
    // */
    void crearAsignatura(const string& nombre) ;
    
    //**
    // @brief Elemina la asignatura con el nombre name.
    // @param name es el nombre de la asignatura
    // */
    void eliminarAsignatura(const string& name) ;

    /* ----- Matrículas ----- */
    //** 
    // @brief Matricula el estudiante de numero de identificacion id a la asignatura dada
    // @param id numero de identificacion de unestudiante
    // @param aisnatura es la ca
    //  */
    void matricular(int id, const string& asignatura) ;

    void desmatricular(int id, const string& asignatura);

    /* ----- Consultas ----- */
    void listarEstudiantes() const ;

    void listarAsignaturas() const 
    ;
    void estudiantesPorAsignatura(const string& asignatura) const ;

};