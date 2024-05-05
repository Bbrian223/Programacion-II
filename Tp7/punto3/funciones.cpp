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
    int indice;

    reg.Cargar();
    indice = arch.buscarIndice(reg.getNumero());

    if(indice != -1){
        cout<<endl<<"NUMERO DE EMPRESA YA REGISTRADO,  ";
        cout<<"CARGUE OTRO O MODIFIQUE EL REGISTRO CORRESPONDIENTE"<<endl;
        return;
    }

    status = arch.grabarRegistro(reg);

    if(!status) exit(10);
}

void ListarRegistros(){
    ArchivoEmpresa arch("empresas.dat");
    Empresa reg;
    bool status;
    int opc, num, indice;

    cout<<"1- LISTAR EMPRESAS"<<endl;
    cout<<"2- LISTAR POR NUMERO"<<endl;
    cout<<"OPCION: ";
    cin>>opc;
    system("cls");

    if(opc != 1 && opc != 2) return;
    if(opc == 1){
        status = arch.listarRegistros();
        if(!status) exit(11);
        return;
    }

    cout<<"numero de empresa: ";
    cin>>num;

    indice = arch.buscarIndice(num);
    reg = arch.buscarRegistro(indice);
    cout<<endl;
    reg.Mostrar();
}

void EliminarRegistro(){
    ArchivoEmpresa arch;
    Empresa reg;
    int num, indice;
    char opc;

    cout<<"Ingrese el numero de empresa a eliminar: ";
    cin>>num;
    system("cls");

    indice = arch.buscarIndice(num);
    reg = arch.buscarRegistro(indice);
    reg.Mostrar();
    cout<<endl<<"Esta seguro que desea dar de baja esta empresa:(S/N) "<<endl;
    cin>>opc;

    if(opc == 'N' && opc == 'n') return;

    reg.setEstado(false);
    cout<<endl;

    if(arch.bajaRegistro(reg,indice)) cout<<"Baja realizada con exito"<<endl;
    else cout<<"Algo fallo......"<<endl;
}

void ModificarCategoria(){
    ArchivoEmpresa arch;
    Empresa reg;
    int num, indice, categoria;
    char opc;

    cout<<"Ingrese el numero de empresa a modificar: ";
    cin>>num;
    system("cls");

    indice = arch.buscarIndice(num);
    reg = arch.buscarRegistro(indice);
    reg.Mostrar();

    cout<<endl<<"Numero de categoria nuevo: "<<endl;
    cin>>categoria;
    cout<<endl<<"Esta seguro que desea modificar esta empresa:(S/N) "<<endl;
    cin>>opc;

    if(opc == 'N' && opc == 'n') return;

    reg.setCategoria(categoria);
    cout<<endl;

    if(arch.bajaRegistro(reg,indice)) cout<<"Modificacion realizada con exito"<<endl;
    else cout<<"Algo fallo......"<<endl;
}

