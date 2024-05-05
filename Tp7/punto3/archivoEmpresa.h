#pragma once
#include "empresa.h"

class ArchivoEmpresa{

private:

    char _nombre[30];

public:

    ArchivoEmpresa(const char* nombre = "empresas.dat");

    bool grabarRegistro(Empresa reg);
    bool bajaRegistro(Empresa reg, int indice);
    bool listarRegistros();
    int cantidadRegitros();
    Empresa buscarRegistro(int pos);
    int buscarIndice(int num);

};


