#include "categoria.h"
#include <cstring>
#include <iostream>
#include "funciones.h"

using namespace std;

Categoria::Categoria(){
    _numero = -1;
    strcpy(_nombre,"SIN NOMBRE");
    _estado = false;
}

Categoria::Categoria(int num, const char* nombre, bool estado){
    setNumero(num);
    setNombre(nombre);
    setEstado(estado);
}

void Categoria::setNumero(int numero){
    if(numero < 1 || numero > 80) numero = 1;
    _numero = numero;
}

int Categoria::getNumero(){return _numero;}

void Categoria::setNombre(const char* nombre){
    if(strlen(nombre) < 49){
        strcpy(_nombre,nombre);
    }else{
        strcpy(_nombre,"SIN NOMBRE");
    }
}

const char* Categoria::getNombre(){return _nombre;}

void Categoria::setEstado(bool estado){
    _estado = estado;
}

bool Categoria::getEstado(){return _estado;}

void Categoria::Cargar(){
    int numero;
    char nombre[50];
    bool estado;

    cout<<"Numero: ";
    cin>>numero;
    cout<<"Nombre: ";
    CargarCadena(nombre,49);
    cout<<"Estado: ";
    cin>>estado;

    setNumero(numero);
    setNombre(nombre);
    setEstado(estado);
}

void Categoria::Mostrar(){
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Numero: "<<_numero<<endl;
    cout<<"Nombre: "<<_nombre<<endl;
    cout<<"Estado: "<<(_estado == true ? "ALTA" : "FALSE")<<endl;
    cout<<"------------------------------------------------------"<<endl;
}


