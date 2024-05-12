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
    _idCategoria = -1;
    _idMunicipio = -1;
    _estado = false;
}

Empresa::Empresa(int num, const char* nombre, int empl, int idCateg, int municipio, bool estado){
    setNumero(num);
    setNombre(nombre);
    setEmpleados(empl);
    setCategoria(idCateg);
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
    _idCategoria = categoria;
}

void Empresa::setMunicipio(int municipio){
    if(municipio < 1 || municipio > 135) municipio = 1;
    _idMunicipio = municipio;
}

void Empresa::setEstado(bool estado){
    _estado = estado;
}

int Empresa::getNumero(){return _numero;}

const char* Empresa::getNombre(){return _nombre;}

int Empresa::getEmpleados(){return _empleados;}

int Empresa::getCategoria(){return _idCategoria;}

int Empresa::getMunicipio(){return _idMunicipio;}

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

    indice = arch.buscarIndice(_idMunicipio);
    reg = arch.buscarRegistro(indice);

    cout<<"------------------------------------------------------"<<endl;
    cout<<"Nombre: "<<_nombre<<endl;
    cout<<"Numero: "<<_numero<<endl;
    cout<<"Cantidad de empleados: "<<_empleados<<endl;
    cout<<"Categoria: "<<_idCategoria<<endl;
    cout<<"Numero de municipio: "<<_idMunicipio<<endl;
    cout<<"Nombre de Municipio: "<<reg.getNombre()<<endl;
    cout<<"Estado: "<<(_estado == true ? "ALTA" : "BAJA")<<endl;
    cout<<"------------------------------------------------------"<<endl;
}












