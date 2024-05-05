#include "funciones.h"
#include "empresa.h"
#include "archivoEmpresa.h"
#include "archivoMunicipio.h"
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

void MunicipiosMasHabitantes(){
    ArchivoMunicipio arch;
    Municipio reg;
    int cant, muni=0;


    cant = arch.cantidadRegitros();
    for(int i=0; i<cant; i++){
        reg = arch.buscarRegistro(i);
        if(reg.getHabitantes() > 200) continue;

        muni++;
    }

    cout<<"Municipios con menos de 200.00 habitantes: "<<muni<<endl;

}

void SeccionMasHabitantes(){
    ArchivoMunicipio arch;
    Municipio reg;
    int cant, posMax;
    int seccion[9] = {0};


    cant = arch.cantidadRegitros();
    for(int i=0; i<cant; i++){
        reg = arch.buscarRegistro(i);
        seccion[reg.getSeccion()-1] += reg.getHabitantes();

        if(i==0)posMax = reg.getSeccion()-1;
        if(seccion[posMax] < seccion[reg.getSeccion()-1]) posMax = i;
    }

    cout<<"Seccion con mayor cantidad de habitantes : "<<posMax+1<<endl;

}

void ListarMunicipios(){
    ArchivoMunicipio arch;
    bool status;

    status = arch.listarRegistros();

    if(!status) exit(11);
}
