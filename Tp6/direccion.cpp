#include "direccion.h"
#include "funciones.h"
#include <cstring>
#include <iostream>

using namespace std;

Direccion::Direccion(){
    strcpy(_calle,"S/C");
    _numero = -1;
    _codPostal = -1;
    strcpy(_localidad,"S/L");
    _piso = -1;
}

Direccion::Direccion(const char* calle, int num, int codPostal, const char* localidad, int piso){
    setCalle(calle);
    setNumero(num);
    setCodPostal(codPostal);
    setLocalidad(localidad);
    setPiso(piso);
}

void Direccion::setCalle(const char* calle){
    if(strlen(calle) > 29) strcpy(_calle,"invalid");
    else strcpy(_calle,calle);
}

void Direccion::setNumero(int numero){
    if(numero > 9999) numero = -1;
    _numero = numero;
}

void Direccion::setCodPostal(int codPostal){
    if(codPostal > 9999) codPostal = -1;
    _codPostal = codPostal;
}

void Direccion::setLocalidad(const char* localidad){
    if(strlen(localidad) > 29) strcpy(_localidad,"invalid");
    else strcpy(_localidad,localidad);
}

void Direccion::setPiso(int piso){
    _piso = piso;
}

const char* Direccion::getCalle(){return _calle;}

int Direccion::getNumero(){return _numero;}

int Direccion::getCodPostal(){return _codPostal;}

const char* Direccion::getLocalidad(){return _localidad;}

int Direccion::getPiso(){return _piso;}

void Direccion::CargarDir(){
    char calle[30], localidad[30];
    int num, codPostal,piso;

    cout<<"Calle: ";
    CargarCadena(calle,29);
    cout<<"Numero: ";
    cin>>num;
    cout<<"Codigo postal: ";
    cin>>codPostal;
    cout<<"Localidad: ";
    CargarCadena(localidad,29);
    cout<<"Piso: ";
    cin>>piso;

    setCalle(calle);
    setNumero(num);
    setCodPostal(codPostal);
    setLocalidad(localidad);
    setPiso(piso);
}

void Direccion::MostrarDir(){
    cout<<"Calle: "<<_calle<<endl;
    cout<<"Numero: "<<_numero<<endl;
    cout<<"Codigo Postal: "<<_codPostal<<endl;
    cout<<"Localidad: "<<_localidad<<endl;
    cout<<"Piso: ";
    if(_piso != 0) cout<<_piso<<endl;
    else cout<<"PB"<<endl;
}
