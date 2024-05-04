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

int opciones(){
    int opc;

    system("cls");
    cout<<"----opcciones:----"<<endl;
    cout<<"1- Casa"<<endl;
    cout<<"2- Departamento "<<endl;
    cout<<"3- Local"<<endl;
    cout<<"4- Terreno"<<endl;
    cout<<"------------------"<<endl;
    cout<<"Opcion: "<<endl;
    cin>>opc;
    system("cls");

    return opc;
}

