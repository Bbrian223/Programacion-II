#include "funciones.h"
#include "empresa.h"
#include "archivoEmpresa.h"
#include <iostream>

using namespace std;

void CargarCadena(char* palabra, int largo){
    int i=0;
    fflush(stdin);

    for(i=0; i<largo; i++){

        palabra[i] = cin.get();
        if(palabra[i] == '\n') break;
    }

    palabra[i] = '\0';
    fflush(stdin);
}

void GrabarRegistro(){
    ArchivoEmpresa arch("empresas.dat");
    Empresa reg;
    bool status;

    reg.Cargar();
    status = arch.grabarRegistro(reg);

    if(!status) exit(10);
}

void GrabarVariosRegistros(){
    ArchivoEmpresa arch("empresas.dat");
    Empresa reg[5];
    bool status;

    for(int i=0; i<5; i++){
        reg[i].Cargar();
        cout<<endl;
        status = arch.grabarRegistro(reg[i]);

        if(!status) exit(10);
    }

}

void ListarRegistros(){
    ArchivoEmpresa arch("empresas.dat");
    bool status;

    status = arch.listarRegistros();

    if(!status) exit(11);
}

