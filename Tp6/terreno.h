#pragma once
#include "inmuebles.h"

class Terreno:public Inmueble{

private:
    char _mejoras;
public:

    Terreno();

    void setMejoras(const char mejoras);
    const char getMejoras();

    void CargarTerreno();
    void MostrarTerreno();

};
