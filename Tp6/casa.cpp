#include "casa.h"
#include <iostream>

using namespace std;

Casa::Casa(){
    Inmueble();
    _superficieConstruida = -1;
    _ambientes = -1;
}

void Casa::setSuperficieConstruida(int supConst){
    if(supConst < 0 ) supConst = 0;
    _superficieConstruida = supConst;
}

void Casa::setAmbientes(int ambientes){
    if(ambientes < 0 ) ambientes = 0;
    _ambientes = ambientes;
}

void Casa::CargarCasa(){
    int supConst, amb;

    Inmueble::CargarInm();
    cout<<"Cantidad de ambientes: ";
    cin>>amb;
    cout<<"Superficie construida: ";
    cin>>supConst;

    setSuperficieConstruida(supConst);
    setAmbientes(amb);
}

void Casa::MostrarCasa(){
    Inmueble::MostrarInm();
    cout<<"Cantidad de ambientes: "<<_ambientes<<endl;
    cout<<"Superficie contruida: "<<_superficieConstruida<<" m2"<<endl;

}

