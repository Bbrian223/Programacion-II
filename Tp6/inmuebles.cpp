#include "inmuebles.h"
#include <cstring>
#include <iostream>
#include "funciones.h"

using namespace std;

Inmueble::Inmueble(){
    _dirInmueble = Direccion();
    _fechaIngreso = Fecha();
    _fechaOperacion = Fecha();
    _superficieTotal = -1;
    _tipo = -1;
}

Inmueble::Inmueble(Direccion dir, Fecha fechaIn, Fecha fechaOp, int supTot, int tipo){
    _dirInmueble = dir;
    _fechaIngreso = fechaIn;
    _fechaOperacion = fechaOp;
    setSuperficieTot(supTot);
    setTipo(tipo);
}

void Inmueble::setDirInmueble(Direccion dir){
    _dirInmueble = dir;
}

void Inmueble::setFechaIngreso(Fecha fechaIn){
    _fechaIngreso = fechaIn;
}

void Inmueble::setFechaOperacion(Fecha fechaOp){
    _fechaOperacion = fechaOp;
}

void Inmueble::setSuperficieTot(int supTot){
    if(supTot <= 0) supTot = -1;
    _superficieTotal = supTot;
}

void Inmueble::setTipo(int tipo){
    if(tipo < 1 && tipo > 2) tipo = -1;
    _tipo = tipo;
}

Direccion Inmueble::getDirInmueble(){return _dirInmueble;}

Fecha Inmueble::getFechaIngreso(){return _fechaIngreso;}

Fecha Inmueble::getFechaOperacion(){return _fechaOperacion;}

int Inmueble::getSuperficieTot(){return _superficieTotal;}

int Inmueble::getTipo(){return _tipo;}

void Inmueble::CargarInm(){
    int supTot,tipo;

    cout<<"Direccion del inmueble: "<<endl;
    _dirInmueble.CargarDir();
    cout<<"Fecha de Ingreso: "<<endl;
    _fechaIngreso.Cargar();
    cout<<"Fecha de Operacion: "<<endl;
    _fechaOperacion.Cargar();
    cout<<"Superficie total: ";
    cin>>supTot;
    cout<<"Tipo de operacion: ";
    cin>>tipo;

    setSuperficieTot(supTot);
    setTipo(tipo);
}

void Inmueble::MostrarInm(){
    cout<<"Direccion Inmueble: "<<endl;
    _dirInmueble.MostrarDir();
    cout<<"Fecha de Ingreso: ";
    _fechaIngreso.Mostrar();
    cout<<"Fecha de Operacion: ";
    _fechaOperacion.Mostrar();
    cout<<"Superficie total: "<<_superficieTotal<<" m2"<<endl;
    cout<<"Tipo de operacion: "<<_tipo<<endl;
}


