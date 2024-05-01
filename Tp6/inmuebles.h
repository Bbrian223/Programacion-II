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

/**5)Una inmobiliaria opera con distintos tipos de inmuebles.
Para todos ellos registra los siguientes datos:

Dirección (calle, número, código postal, localidad, piso, etc.)
Fecha de ingreso
Fecha de operación
Superficie total
Tipo de operación (1: venta; 2: alquiler)
*/
