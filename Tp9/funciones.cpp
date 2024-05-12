#include "funciones.h"
#include "empresa.h"
#include "archivoEmpresa.h"
#include "archivoMunicipio.h"
#include "archivoCategoria.h"
#include "categoria.h"
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

    cout<<"----------------------Empresas:-----------------------"<<endl;
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

    cout<<"Municipios con menos de 200.00 habitantes: ";
    if(!muni)cout<<endl<<endl<<" \tNo hay municipios con menos de 200.000 habitantes";
    else cout<<muni<<endl;

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
        if(seccion[posMax] < seccion[reg.getSeccion()-1]) posMax = reg.getSeccion()-1;
    }

    cout<<"Seccion con mayor cantidad de habitantes : "<<posMax+1<<endl;

}

void GrabarMunicipios(){
    ArchivoMunicipio arch;
    Municipio reg;
    bool status;

    cout<<"---------------------Municipio:-----------------------"<<endl;
    reg.Cargar();
    status = arch.grabarRegistro(reg);

    if(!status) exit(10);
}

void ListarMunicipios(){
    ArchivoMunicipio arch;
    bool status;

    cout<<"---------------------Municipios:----------------------"<<endl;
    status = arch.listarRegistros();

    if(!status) exit(11);
}

void GrabarCategoria(){
    ArchivoCategoria arch;
    Categoria reg;
    bool status;

    cout<<"---------------------Categoria------------------------"<<endl;
    reg.Cargar();
    status = arch.grabarRegistro(reg);

    if(!status) exit(11);
}

void ListarCategoria(){
    ArchivoCategoria arch;
    bool status;

    cout<<"---------------------Categorias-----------------------"<<endl;
    status = arch.listarRegistros();

    if(!status) exit(11);
}

void CategoriaMasEmpresaas(){
    ArchivoEmpresa arch;
    Empresa reg;
    int categorias[80] = {0};
    int cant,posMax=0;

    cant = arch.cantidadRegitros();
    for(int i=0; i<cant; i++){
        reg = arch.buscarRegistro(i);

        if(i==0)posMax = reg.getCategoria()-1;

        categorias[reg.getCategoria()-1]++;

        if(categorias[posMax] < categorias[reg.getCategoria()-1]) posMax = reg.getCategoria()-1;

    }

    cout<<"Categoria con mas empresas : "<< posMax+1<<endl;
}

void EmpresasCategQuince(){

}


