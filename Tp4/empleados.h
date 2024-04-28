#pragma once
#include "persona.h"

class Empleado:public Persona{

private:

    char _email[50];
    int _cargo;

public:

    Empleado();
    Empleado(const char *email, int cargo);

    void setEmail(const char *email);
    void setCargo(int cargo);

    const char* getEmail();
    int getCargo();

    void CambiarDom(const char* domicilio);
    void Cargar();
    void Mostrar();
    void MostrarDatosPers();

};
