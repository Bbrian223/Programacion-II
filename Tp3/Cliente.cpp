#include "Cliente.h"
#include <iostream>
#include <cstring>

using namespace std;

///private:

void Cliente::setDni(const char* dni){
    if(strlen(dni) <= 8 ) strcpy(_Dni,dni);
}

void Cliente::setFecha(Fecha fechaNac){
    _FechaNacimiento = fechaNac;
}

void Cliente::setNombre(const char* nombre){
    strcpy(_Nombre,nombre);
}

void Cliente::setApellido(const char* apellido){
    strcpy(_Apellido,apellido);
}

void Cliente::setEmail(const char* email){
    strcpy(_Email,email);
}

void Cliente::setTel(const char* tel){
    strcpy(_Tel,tel);
}

///public:

Cliente::Cliente(const char* dni, Fecha fechaNac, const char* nombre, const char* apellido, const char* email, const char* tel){
    setDni(dni);
    setFecha(fechaNac);
    setNombre(nombre);
    setApellido(apellido);
    setEmail(email);
    setTel(tel);

}

Cliente:: Cliente(char* nombre){
    setNombre(nombre);
}

const char* Cliente::getDni(){return _Dni;}
Fecha Cliente::getFecha(){return _FechaNacimiento;}
const char* Cliente::getNombre(){return _Nombre;}
const char* Cliente::getApellido(){return _Apellido;}
const char* Cliente::getEmail(){return _Email;}
const char* Cliente::getTel(){return _Tel;}

void Cliente::Cargar(const char* dni, Fecha fechaNac, const char* nombre, const char* apellido, const char* email, const char* tel){
    setDni(dni);
    setFecha(fechaNac);
    setNombre(nombre);
    setApellido(apellido);
    setEmail(email);
    setTel(tel);
}

void Cliente::Mostrar(){
    cout<<"Dni: "<<_Dni<<endl;
    cout<<"Fecha de nacimiento: ";
    _FechaNacimiento.Mostrar();
    cout<<"Nombre: "<<_Nombre<<endl;
    cout<<"Apellido: "<<_Apellido<<endl;
    cout<<"Email: "<<_Email<<endl;
    cout<<"Telefono: "<<_Tel;
}

