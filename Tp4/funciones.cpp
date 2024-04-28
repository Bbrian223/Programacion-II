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

void CargarEmpleados(Empleado *empl, int tam){
    for(int i=0; i<tam; i++){
        empl[i].Cargar();
        cout<<endl;
    }
}

void MostrarEmpleados(Empleado *empl, int tam){
    for(int i=0; i<tam; i++){
        empl[i].Mostrar();
        cout<<endl;
    }
}

void MostrarDatosPers(Empleado *empl){
    int num;

    cout<<"Numero de empleado : ";
    cin>>num;

    empl[num-1].MostrarDatosPers();

}

void CambiarDomicilio(Empleado *empl, int num){
    char direccion[50];
    cout<<"direccion: ";
    CargarCadena(direccion,49);
    empl[num].CambiarDom(direccion);
}

