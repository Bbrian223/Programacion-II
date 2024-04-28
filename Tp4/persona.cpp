#include "persona.h"
#include "funciones.h"
#include <iostream>
#include <cstring>

using namespace std;

Persona::Persona(){
    _dni = 0;
    strcpy(_nombre,"S/N");
    strcpy(_apellido,"S/A");
    strcpy(_domicilio,"S/D");
    _fechaNacimiento = Fecha();
}

Persona::Persona(int dni, const char *nombre, const char *apellido, const char *domicilio, Fecha fechaNac){
    setNombre(nombre);
    setApellido(apellido);
    setDomicilio(domicilio);
    setFechaNacimiento(fechaNac);
}

void Persona::setDni(int dni){
    _dni = dni;
}

void Persona::setNombre(const char *nombre){
    strcpy(_nombre,nombre);
}

void Persona::setApellido(const char *apellido){
    strcpy(_apellido,apellido);
}

void Persona::setDomicilio(const char *domicilio){
    strcpy(_domicilio,domicilio);
}

void Persona::setFechaNacimiento(Fecha fechaNac){
    _fechaNacimiento = fechaNac;
}

void Persona::Cargar(){
    cout<<"Nombre: ";
    CargarCadena(_nombre,29);
    cout<<"Apellido: ";
    CargarCadena(_apellido,29);
    cout<<"Domicilio: ";
    CargarCadena(_domicilio,49);
    cout<<"fecha de nacimiento: "<<endl;
    _fechaNacimiento.Cargar();
}

void Persona::MostrarP(){
    cout<<"Nombre: "<<_nombre<<endl;
    cout<<"Apellido: "<<_apellido<<endl;
    cout<<"Domicilio: "<<_domicilio<<endl;
    cout<<"Fecha de nacimiento: ";
    _fechaNacimiento.Mostrar();
}

