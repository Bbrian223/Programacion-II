#include "empleados.h"
#include <cstring>
#include <iostream>
#include "funciones.h"

using namespace std;

Empleado::Empleado(){
    Persona();
    strcpy(_email,"S/E");
    _cargo = -1;
}

Empleado::Empleado(const char *email, int cargo){
    setEmail(email);
    setCargo(cargo);
}

void Empleado::setEmail(const char* email){
    strcpy(_email,email);
}

void Empleado::setCargo(int cargo){
    if(cargo < 1 && cargo > 5) cargo = -1;
    _cargo = cargo;
}

const char* Empleado::getEmail(){ return _email;}

int Empleado::getCargo(){ return _cargo;}

void Empleado::CambiarDom(const char* domicilio){
    Persona::setDomicilio(domicilio);
}

void Empleado::Cargar(){
    int cargo;

    Persona::Cargar();
    cout<<"Email: ";
    CargarCadena(_email,49);
    cout<<"Cargo: ";
    cin>>cargo;
    setCargo(cargo);
}

void Empleado::Mostrar(){
    Persona::MostrarP();
    cout<<"Email: "<<_email<<endl;
    cout<<"Cargo: "<<_cargo<<endl;
}
