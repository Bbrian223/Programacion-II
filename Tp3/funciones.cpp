#include "funciones.h"
#include <cstring>
#include <iostream>

using namespace std;

void cargarCadena(char *palabra, int tamano){
    int i;
    fflush(stdin);

    for (i=0; i<tamano; i++){
        palabra[i]=cin.get();

        if (palabra[i]=='\n')break;
    }

    palabra[i]='\0';
    fflush(stdin);
}

void CargarListaClientes(Cliente *clte, int tam){

    for(int i=0; i<tam; i++){
        clte[i].Cargar();
        cout<<endl;
    }
}

void MostrarListaClientes(Cliente *clte, int tam){
    for(int i=0; i<tam; i++){
        clte[i].Mostrar();
        cout<<endl<<endl;
    }
}

void CltesDniMenoresA(Cliente *clte, int tam){
    char dni[9];
    int status;

    cout<<"Numero de Dni max: ";
    cargarCadena(dni,8);
    cout<<endl;

    for(int i=0; i<tam; i++){
        status = strcmp(dni,clte[i].getDni());
        if(status <= 0) continue;

        clte[i].Mostrar();
        cout<<endl<<endl;
    }
}

int CltesDniPos(Cliente *clte, int tam, const char *dni){
    int status;

    for(int i=0; i<tam; i++){
        status = strcmp(dni,clte[i].getDni());
        if(status == 0) return i;

    }

    return -1;
}

Cliente BuscarCltePorDni(Cliente *clte, int tam, const char *dni){
    Cliente aux;
    aux.setDni("-1");
    int status;

    for(int i=0; i<tam; i++){
        status = strcmp(dni,clte[i].getDni());
        if(status == 0){
            aux = clte[i];
            break;
        }
    }

    return aux;
}
