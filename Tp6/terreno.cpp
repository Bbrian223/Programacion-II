#include "terreno.h"
#include <iostream>

using namespace std;

Terreno::Terreno(){
    Inmueble();
    _mejoras = '\0';
}

void Terreno::setMejoras(const char mejoras){
    if(mejoras != 'A' && mejoras != 'B' && mejoras != 'C') _mejoras = 'A';
    else _mejoras = mejoras;
}

const char Terreno::getMejoras(){return _mejoras;}

void Terreno::CargarTerreno(){
    char mejoras;

    Inmueble::CargarInm();
    cout<<"Mejoras: ";
    cin>>mejoras;

    setMejoras(mejoras);
}

void Terreno::MostrarTerreno(){
    Inmueble::MostrarInm();
    cout<<"mejoras: ";

    if(_mejoras == 'A')cout<<"sin mejoras"<<endl;
    else cout<<(_mejoras == 'B' ? "Asfalto" : "Todos los servicios")<<endl;
}
