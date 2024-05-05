#include "municipio.h"
#include "funciones.h"
#include <iostream>
#include <cstring>

using namespace std;

Municipio::Municipio(){
    _numero = -1;
    strcpy(_nombre,"S/N");
    _seccion = -1;
    _habitantes = -1;
    _estado = false;
}

Municipio::Municipio(int num, const char* nombre, int sec, int hab, bool estado){
    setNumero(num);
    setNombre(nombre);
    setSeccion(sec);
    setHabitantes(hab);
    setEstado(estado);
}

void Municipio::setNumero(int numero){
    if(numero < 1 || numero > 135) numero = 1;
    _numero = numero;
}

void Municipio::setNombre(const char* nombre){
    strcpy(_nombre,nombre);
}

void Municipio::setSeccion(int seccion){
    if(seccion < 1 || seccion > 9) seccion = 1;
    _seccion = seccion;
}

void Municipio::setHabitantes(int habitantes){
    _habitantes = habitantes;
}

void Municipio::setEstado(bool estado){
    _estado = estado;
}

int Municipio::getNumero(){return _numero;}

const char* Municipio::getNombre(){return _nombre;}

int Municipio::getSeccion(){return _seccion;}

int Municipio::getHabitantes(){return _habitantes;}

bool Municipio::getEstado(){return _estado;}

void Municipio::Cargar(){
    int num, sec, hab;
    char nombre[30];
    bool estado;

    cout<<"Numero: ";
    cin>>num;
    cout<<"Nombre: ";
    CargarCadena(nombre,29);
    cout<<"Seccion : ";
    cin>>sec;
    cout<<"Habitantes: ";
    cin>>hab;
    cout<<"Estado: ";
    cin>>estado;

    setNumero(num);
    setNombre(nombre);
    setSeccion(sec);
    setHabitantes(hab);
    setEstado(estado);
}

void Municipio::Mostrar(){
    cout<<"Numero: "<<_numero<<endl;
    cout<<"Nombre: "<<_nombre<<endl;
    cout<<"Seccion: "<<_seccion<<endl;
    cout<<"Cantidad de habitantes: "<<_habitantes<<endl;
    cout<<"Estado: "<<(_estado == false ? "BAJA" : "ALTA")<<endl;
}



