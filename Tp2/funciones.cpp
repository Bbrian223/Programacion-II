#include "funciones.h"
#include <iostream>
#include <cstring>

using namespace std;

void cargarCadena(char *palabra, int tamano){

    fflush(stdin);

    for (int i=0; i<tamano; i++){
        palabra[i]=cin.get();

        if (palabra[i]=='\n'){
            palabra[i]='\0';
            break;
        }
    }

    fflush(stdin);
}

void cargarArticulos(Articulo *art, int tam){
    char cod[5], desc[30];
    float prec;
    int cant;
    bool status;

    for(int i=0; i<tam; i++){

        cout<<"Codigo: ";
        cargarCadena(cod,5);
        cout<<"Descripcion: ";
        cargarCadena(desc,30);
        cout<<"Precio: ";
        cin>>prec;
        cout<<"Cantidad: ";
        cin>>cant;
        cout<<"Estado: ";
        cin>>status;

        art[i].Cargar(cod,desc,prec,cant,status);
        cout<<endl;
    }

}

void mostrarArticulos(Articulo *art, int tam){

    for(int i=0; i<tam; i++){
        art[i].Mostrar();
        cout<<endl;
    }
}

void filtrarArtPrecio(Articulo *art, int tam, float comparacion){
    float precio;
    system("cls");

    for(int i=0; i<tam; i++){
        precio = art[i].getPrecio();
        if(precio >= comparacion)continue;

        art[i].Mostrar();
        cout<<endl;
    }
}

int BuscarPosArt(Articulo *art, int tam){
    char codBuscar[5],codAct[5];
    cout<<"ingrese codigo a buscar: ";
    cargarCadena(codBuscar,5);
    system("cls");

    for(int i=0; i<tam; i++){
        strcpy(codAct,art[i].getCodArt());
        if(strcmp(codAct,codBuscar))continue;

        return i;
    }

    return -1;
}

Articulo BuscarArt(Articulo *art, int tam){
    Articulo aux;
    char codBuscar[5],codAct[5];

    cout<<"ingrese codigo a buscar: ";
    cargarCadena(codBuscar,5);
    system("cls");

    for(int i=0; i<tam; i++){
        strcpy(codAct,art[i].getCodArt());
        if(strcmp(codAct,codBuscar))continue;

        aux = art[i];
    }

    return aux;
}

int BuscarArtStock(Articulo *art, int tam, int maximo){
    int aux, cont=0;

    for(int i=0; i<tam; i++){
        aux = art[i].getStock();
        if(aux < maximo) cont++;
    }
    return cont;
}

void AumentarPrecios(Articulo *art, int tam, int porcent){

    for(int i=0; i<tam; i++){
        art[i].SubirPrecio(porcent);
    }
}




