#include "articulo.h"
#include <iostream>
#include <cstring>

using namespace std;

///private:

void Articulo::setCodArt(const char* cod){
    strcpy(_CodArt,cod);
}

void Articulo::setDesc(const char* desc){
    strcpy(_Descripcion,desc);
}

void Articulo::setPrecio(float precio){
    _Precio = precio;
}

void Articulo::setStock(int stock){
    _Stock = stock;
}

void Articulo::setEstado(bool estado){
    _Estado = estado;
}

///public

Articulo::Articulo(const char* cod, const char* desc, float precio, int stock, bool estado){
    setCodArt(cod);
    setDesc(desc);
    setPrecio(precio);
    setStock(stock);
    setEstado(estado);
}

Articulo::Articulo(char* desc){     //const char* --> solo valores por omision
    setDesc(desc);
}

const char* Articulo::getCodArt(){return _CodArt;}
const char* Articulo::getDesc(){return _Descripcion;}
float Articulo::getPrecio(){return _Precio;}
int Articulo::getStock(){return _Stock;}
bool Articulo::getEstado(){return _Estado;}

void Articulo::Cargar(const char* cod, const char* desc, float precio, int stock, bool estado){
    setCodArt(cod);
    setDesc(desc);
    setPrecio(precio);
    setStock(stock);
    setEstado(estado);
}

void Articulo::Mostrar(){
    cout<<endl;
    cout<<"Codigo articulo: "<<_CodArt<<endl;
    cout<<"Descripcion: "<<_Descripcion<<endl;
    cout<<"Precio: $"<<_Precio<<endl;
    cout<<"Unidades en Stock: "<<_Stock<<endl;
    cout<<"Estado: "<<(_Estado == false ? "false":"verdadero")<<endl;

}

void Articulo::SubirPrecio(int porcent){
    float aumento = 1;
    aumento += (float)porcent/100;
    _Precio *= aumento;
}

