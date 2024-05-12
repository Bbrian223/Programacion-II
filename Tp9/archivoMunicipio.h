#pragma once
#include "municipio.h"

class ArchivoMunicipio{

private:

    char _nombre[30];

public:

    ArchivoMunicipio(const char* nombre = "municipios.dat");

    bool grabarRegistro(Municipio reg);
    bool listarRegistros();
    int cantidadRegitros();
    int buscarIndice(int num);
    Municipio buscarRegistro(int indice);

};
