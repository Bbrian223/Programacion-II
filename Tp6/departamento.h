#pragma once
#include "inmuebles.h"

class Departamento:public Inmueble{

private:

    int _ambientes;
    bool _instComplementarias;

public:

    Departamento();

    void setAmbientes(int ambientes);
    void setInstComplementarias(bool instComp);

    int getAmbientes();
    bool getInstComplementarias();

    void CargarDep();
    void MostrarDep();

};
