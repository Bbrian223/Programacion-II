#pragma once
#include "fecha.h"

class Cliente{
private:

    char _dni[8];
    Fecha _fechaNacimiento;
    char _Nombre[30];
    char _Apellido[30];
    char _Email[50];
    char _Tel[10];

    void setDni(long dni);
    void setFecha(Fecha fechaNac);
    void setNombre(const char* nombre);
    void setApellido(const char* apellido);
    void setEmail(const char* email);
    void setTel(long tel);

public:

    Cliente(Fecha fechaNac, const char* dni="xxxxxxxx", const char* nombre="invalid", const char* apellido="invalid", const char* email="invalid", const char* tel="xxxxxxxxxx");
    Cliente(char* nombre);

    const char* getDni();
    Fecha getFecha();
    const char* getNombre();
    const char* getApellido();
    const char* getEmail();
    const char* getTel();

    void Cargar(const char* dni, Fecha fecha, const char* nombre, const char* apellido, const char* email, const char* tel);
    void Mostrar();


};
