#include "empresa.h"
#include "funciones.h"
#include <iostream>
#include <cstring>
#include "archivoMunicipio.h"

using namespace std;

Empresa::Empresa(){
    _numero = -1;
    strcpy(_nombre,"S/N");
    _empleados = -1;
    _categoria = -1;
    _municipio = -1;
    _estado = false;
}

Empresa::Empresa(int num, const char* nombre, int empl, int categ, int municipio, bool estado){
    setNumero(num);
    setNombre(nombre);
    setEmpleados(empl);
    setCategoria(categ);
    setMunicipio(municipio);
    setEstado(estado);
}

void Empresa::setNumero(int numero){
    _numero = numero;
}

void Empresa::setNombre(const char* nombre){
    strcpy(_nombre,nombre);
}

void Empresa::setEmpleados(int empleados){
    _empleados = empleados;
}

void Empresa::setCategoria(int categoria){
    if(categoria < 1 || categoria > 80) categoria = 1;
    _categoria = categoria;
}

void Empresa::setMunicipio(int municipio){
    if(municipio < 1 || municipio > 135) municipio = 1;
    _municipio = municipio;
}

void Empresa::setEstado(bool estado){
    _estado = estado;
}

int Empresa::getNumero(){return _numero;}

const char* Empresa::getNombre(){return _nombre;}

int Empresa::getEmpleados(){return _empleados;}

int Empresa::getCategoria(){return _categoria;}

int Empresa::getMunicipio(){return _municipio;}

bool Empresa::getEstado(){return _estado;}

void Empresa::Cargar(){
    int num, empl, categ, mun;
    char nombre[30];
    bool estado;

    cout<<"Nombre: ";
    CargarCadena(nombre,29);
    cout<<"Numero: ";
    cin>>num;
    cout<<"Cantidad de empleados: ";
    cin>>empl;
    cout<<"Categoria: ";
    cin>>categ;
    cout<<"Municipio: ";
    cin>>mun;
    cout<<"Estado: ";
    cin>>estado;

    setNumero(num);
    setNombre(nombre);
    setEmpleados(empl);
    setCategoria(categ);
    setMunicipio(mun);
    setEstado(estado);
}

void Empresa::Mostrar(){
    ArchivoMunicipio arch;
    Municipio reg;
    int indice;

    indice = arch.buscarIndice(_municipio);
    reg = arch.buscarRegistro(indice);

    cout<<"Nombre: "<<_nombre<<endl;
    cout<<"Numero: "<<_numero<<endl;
    cout<<"Cantidad de empleados: "<<_empleados<<endl;
    cout<<"Categoria: "<<_categoria<<endl;
    cout<<"Numero de municipio: "<<_municipio<<endl;
    cout<<"Nombre de Municipio: "<<reg.getNombre()<<endl;
    cout<<"Estado: "<<(_estado == true ? "ALTA" : "BAJA")<<endl;
}












