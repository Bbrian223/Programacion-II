#pragma once
#include "inmuebles.h"

class Locales:public Inmueble{

private:

    int _zona;

public:

    Locales();

    void setZona(int zona);
    int getZona();

    void CargarLocal();
    void MostrarLocal();

};
