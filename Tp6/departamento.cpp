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

void Departamento::MostrarDep(){
    Inmueble::MostrarInm();
    cout<<"Cantidad de ambientes: "<<_ambientes<<endl;
    cout<<(_instComplementarias == true ? "Si": "No")<<endl;
}
