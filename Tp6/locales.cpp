#include "locales.h"
#include <iostream>

using namespace std;

Locales::Locales(){
    Inmueble();
    _zona = -1;
}

void Locales::setZona(int zona){
    if(zona < 1 && zona > 3) zona = 1;
    _zona = zona;
}

int Locales::getZona(){return _zona;}

void Locales::CargarLocal(){
    int zona;

    Inmueble::CargarInm();
    cout<<"Zona: ";
    cin>> zona;

    setZona(zona);
}

void Locales::MostrarLocal(){

    Inmueble::MostrarInm();
    cout<<"Zona: ";

    if(_zona == 1) cout<<"comercial"<<endl;
    else cout<<(_zona == 2 ? "mixta":"industrial")<<endl;
}
