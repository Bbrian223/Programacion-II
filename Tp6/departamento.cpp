#include "departamento.h"
#include <iostream>

using namespace std;

Departamento::Departamento(){
    Inmueble();
    _ambientes = -1;
    _instComplementarias = -1;
}

void Departamento::setAmbientes(int ambientes){
    if(ambientes < 0) ambientes = 0;
    _ambientes = ambientes;
}

void Departamento::setInstComplementarias(bool instComp){
    _instComplementarias = instComp;
}

int Departamento::getAmbientes(){return _ambientes;}

bool Departamento::getInstComplementarias(){return _instComplementarias;}

void Departamento::CargarDep(){
    int amb;
    bool instComp;

    Inmueble::CargarInm();
    cout<<"Cantidad de Ambientes: ";
    cin>>amb;
    cout<<"Instalaciones complementarias: ";
    cin>>instComp;

    setAmbientes(amb);
    setInstComplementarias(instComp);
}

void Departamento::MostrarDep(){
    Inmueble::MostrarInm();
    cout<<"Cantidad de ambientes: "<<_ambientes<<endl;
    cout<<"Instalaciones complementarias: "<<(_instComplementarias == true ? "Si": "No")<<endl;
}
