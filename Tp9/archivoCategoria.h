#pragma once
#include "categoria.h"

class ArchivoCategoria{

private:

    char _nombre[30];

public:

    ArchivoCategoria(const char* nombre = "categorias.dat");

    bool grabarRegistro(Categoria reg);
    bool listarRegistros();
    int cantidadRegistros();

};
