#include "funciones.h"
#include <iostream>

using namespace std;

void CargarCadena(char *palabra, int tam){
    int i;
    fflush(stdin);

    for(i=0; i<tam; i++){
        palabra[i] = cin.get();

        if(palabra[i] == '\n') break;
    }

    palabra[i] = '\0';
    fflush(stdin);
}

void CargarInvestigador(Investigador *inv, int tam){
    for(int i=0; i<tam; i++){
        inv[i].Cargar();
        cout<<endl;
    }
}

void MostrarInvestigador(Investigador *inv, int tam){
    for(int i=0; i<tam; i++){
        inv[i].Mostrar();
        cout<<endl;
    }
}

void MostrarDatosPers(Investigador *inv){
    int num;

    cout<<"Numero de Investigador: ";
    cin>>num;

    inv[num-1].MostrarDatosPers();

}

void CambiarDomicilio(Investigador *inv, int num){
    char direccion[50];
    cout<<"direccion: ";
    CargarCadena(direccion,49);
    inv[num].CambiarDom(direccion);
}

