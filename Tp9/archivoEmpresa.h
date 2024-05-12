#pragma once
#include "empresa.h"

class ArchivoEmpresa{

private:

    char _nombre[30];

public:

    ArchivoEmpresa(const char* nombre = "empresas.dat");

    bool grabarRegistro(Empresa reg);
    bool listarRegistros();
    int buscarIndice(int num, const char* nombre = "empresas.dat");
    Empresa buscarRegistro(int indice, const char* nombre = "empresas.dat");
    int cantidadRegitros(const char* nombre = "empresas.dat");

    bool grabarRegistro(const char* nombre, Empresa reg);
    bool listarRegistros(const char* nombre);


};
