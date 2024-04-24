#include "fecha.h"
#include "iostream"

using namespace std;

///private:

void Fecha::setDia(int dia){
    if(dia < 1 || dia > 31) dia = 1;
    _Dia = dia;
}

void Fecha::setMes(int mes){
    if(mes < 1 || mes > 12) mes = 1;
    _Mes = mes;
}

void Fecha::setAnio(int anio){
    if(anio < 1900) anio = 1900;
    _Anio = anio;
}

///public:

Fecha::Fecha(int dia, int mes, int anio){
    setDia(dia);
    setMes(mes);
    setAnio(anio);
}

int Fecha::getDia(){ return _Dia;}

int Fecha::getMes(){ return _Mes;}

int Fecha::getAnio(){ return _Anio;}

void Fecha::Cargar(int dia, int mes, int anio){
    setDia(dia);
    setMes(mes);
    setAnio(anio);
}

void Fecha::Mostrar(){

    cout<<(_Dia <= 9 ? "0":"")<<_Dia<<"/";
    cout<<(_Mes <= 9 ? "0":"")<<_Mes<<"/";
    cout<<_Anio<<endl;
}




