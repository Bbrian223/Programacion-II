#pragma once
#include "empresa.h"

class ArchivoEmpresa{

private:

    char _nombre[30];

public:

    ArchivoEmpresa(const char* nombre = "empresas.dat");

    bool grabarRegistro(Empresa reg);
    bool listarRegistros();
    int buscarIndice(int num);
    Empresa buscarRegistro(int indice);
    int cantidadRegitros();

};
