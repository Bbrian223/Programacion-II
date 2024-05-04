#pragma once
#include "inmuebles.h"

class Casa: public Inmueble{

private:

    int _ambientes;
    int _superficieConstruida;

public:

    Casa();

    int getSuperficieConstruida();
    int getAmbientes();
    void setSuperficieConstruida(int supConst);
    void setAmbientes(int ambientes);

    void CargarCasa();
    void MostrarCasa();

};
