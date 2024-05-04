#pragma once
#include "direccion.h"
#include "fecha.h"

class Inmueble{

private:
    Direccion _dirInmueble;
    Fecha _fechaIngreso;
    Fecha _fechaOperacion;
    int _superficieTotal;
    int _tipo;

protected:
    void setDirInmueble(Direccion dir);
    void setFechaIngreso(Fecha fechaIn);
    void setFechaOperacion(Fecha fechaOp);
    void setSuperficieTot(int supTot);
    void setTipo(int tipo);

public:

    Inmueble();
    Inmueble(Direccion dir, Fecha fechaIn, Fecha fechaOp, int supTot, int tipo);

    Direccion getDirInmueble();
    Fecha getFechaIngreso();
    Fecha getFechaOperacion();
    int getSuperficieTot();
    int getTipo();

    void CargarInm();
    void MostrarInm();

};
