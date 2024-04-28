#pragma once
#include "fecha.h"

class Persona{
private:
    int _dni;
    char _nombre[30];
    char _apellido[30];
    char _domicilio[50];
    Fecha _fechaNacimiento;

protected:

    void setDni(int dni);
    void setNombre(const char *nombre);
    void setApellido(const char *apellido);
    void setDomicilio(const char *domicilio);
    void setFechaNacimiento(Fecha fechaNac);

public:

    Persona();
    Persona(int dni, const char *nombre, const char *apellido, const char *direccion, Fecha fechaNac);

    int getDni();
    const char* getNombre();
    const char* setApellido();
    const char* setDireccion();
    Fecha setFechaNacimiento();

    void Cargar();
    void MostrarP();
};
