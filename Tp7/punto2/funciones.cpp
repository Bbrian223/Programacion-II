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

void ListarRegistros(){
    ArchivoEmpresa arch("empresas.dat");
    bool status;

    status = arch.listarRegistros();

    if(!status) exit(11);
}

void EmpresasPorMunicipio(){
    ArchivoEmpresa arch("empresas.dat");
    Empresa reg;
    int cant;
    int municipios[135] = {0};

    cant = arch.cantidadRegitros();
    for(int i=0; i<cant; i++){
        reg = arch.buscarRegistro(i);
        municipios[reg.getMunicipio()-1]++;
    }

    for(int i=0; i<135; i++){
        if(!municipios[i])continue;

        cout<<"municipio "<<i+1<<": "<<municipios[i]<<endl;
    }
}

void EmpresasMasEmpleados(){
    ArchivoEmpresa arch;
    Empresa reg;
    int cant;

    cant = arch.cantidadRegitros();
    cout<<"Lista de empresas con mas de 200 empleados: "<<endl<<endl;
    for(int i=0; i<cant; i++){
        reg = arch.buscarRegistro(i);
        if(reg.getEmpleados() <= 200) continue;

        cout<<"\t- "<<reg.getNombre()<<endl;
    }
}

void CategoriaMasEmpleados(){
    ArchivoEmpresa arch;
    Empresa reg;
    int cant, posMax;
    int categorias[80]={0};

    cant = arch.cantidadRegitros();

    for(int i=0; i<cant; i++){
        reg = arch.buscarRegistro(i);
        categorias[reg.getCategoria()-1] += reg.getEmpleados();

        if(i==0)posMax = reg.getCategoria()-1;

        if(categorias[posMax] < categorias[reg.getCategoria()-1]){
            posMax = reg.getCategoria()-1;
        }
    }

    cout<<"Categoria de empresa con mas empleados: "<<endl<<endl;
    cout<<"\t- categoria "<<posMax+1<<endl;


}

