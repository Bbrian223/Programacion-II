#pragma once
#include "fecha.h"

class Cliente{
private:

    char _Dni[10]={};
    Fecha _FechaNacimiento;
    char _Nombre[30];
    char _Apellido[30];
    char _Email[50];
    char _Tel[10];

    void setDni(const char* dni);
    void setFecha(Fecha fechaNac);
    void setNombre(const char* nombre);
    void setApellido(const char* apellido);
    void setEmail(const char* email);
    void setTel(const char* tel);

public:

    Cliente(const char* dni="S/D", Fecha fechaNac=Fecha(), const char* nombre="S/N", const char* apellido="S/A", const char* email="S/E", const char* tel="S/T");
    Cliente(char* nombre);

    const char* getDni();
    Fecha getFecha();
    const char* getNombre();
    const char* getApellido();
    const char* getEmail();
    const char* getTel();

    void Cargar(const char* dni, Fecha fechaNac, const char* nombre, const char* apellido, const char* email, const char* tel);
    void Mostrar();


};
