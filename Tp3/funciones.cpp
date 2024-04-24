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

void CargaClientes(Cliente *clte, int tam){
    Fecha fechaClte;
    int dia, mes, anio;
    char dni[8]={}, nombre[30]={},apellido[30]={},email[50]={},tel[10]={};

    for(int i=0; i<tam; i++){
        cout<<"Nombre: ";
        cargarCadena(nombre,30);
        cout<<"Apellido: ";
        cargarCadena(apellido,30);
        cout<<"Fecha de nacimiento:"<<endl;
        cout<<"Dia: ";
        cin>>dia;
        cout<<"mes: ";
        cin>> mes;
        cout<<"Anio: ";
        cin>>anio;

        fechaClte.Cargar(dia,mes,anio);

        cout<<"Dni: ";
        cargarCadena(dni,8);
        cout<<"Email: ";
        cargarCadena(email,50);
        cout<<"Telefono: ";
        cargarCadena(tel,10);
        cout<<endl;

        clte[i].Cargar(dni,fechaClte,nombre,apellido,email,tel);
    }
}

void MostrarListaClientes(Cliente *clte, int tam){
    for(int i=0; i<tam; i++){
        clte[i].Mostrar();
        cout<<endl<<endl;
    }
}

