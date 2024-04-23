#include <iostream>
#include <cstring>
#include "articulo.h"
#include "funciones.h"

using namespace std;

int main()
{
    const int tam = 3;
    Articulo art[tam];
    Articulo aux;
    int opc;

    while(true){
        system("cls");
        cout<<"----------MENU----------"<<endl;
        cout<<"1- Cargar un vector de 10 Articulos"<<endl;
        cout<<"2- Listar todos los artiuclos del vector"<<endl;
        cout<<"3- Filtrar articulos por precio"<<endl;
        cout<<"4- Buscar posicion de articulo"<<endl;
        cout<<"5- Buscar Articulo"<<endl;
        cout<<"6- Buscar articulos por stock"<<endl;
        cout<<"7- Aumentar precios por porcentaje"<<endl;
        cout<<"0- salir"<<endl;
        cin>>opc;
        system("cls");
        switch(opc){
        case 1:
            cargarArticulos(art,tam);
            break;
        case 2:
            mostrarArticulos(art,tam);
            break;
        case 3:
            float precio;
            cout<<"precio: ";
            cin>>precio;
            filtrarArtPrecio(art,tam,precio);

            break;
        case 4:
            int pos;
            pos = BuscarPosArt(art,tam);
            if(pos != -1)cout<<"Posicion del articulo: "<<pos+1<<endl;
            else cout<<"No se encontro articulo cargado"<<endl;

            break;
        case 5:
            aux = BuscarArt(art,tam);
            if(aux.getStock() == -1)cout<<"No se encontro articulo cargado"<<endl;
            else aux.Mostrar();

            break;
        case 6:
            int stock,cant;
            cout<<"valor de stock maximo: ";
            cin>>stock;
            cant=BuscarArtStock(art,tam,stock);
            if(cant)cout<<"Cantidad de articulos: "<<cant<<endl;
            else cout<<"No hay articulos con menor stock al ingresado"<<endl;

            break;
        case 7:
            int porcentaje;
            cout<<"Porcentaje de aumento: ";
            cin>>porcentaje;
            AumentarPrecios(art,tam,porcentaje);
            break;
        case 0:
            return 0;
        }

        system("pause>nul");
    }

    return 0;
}
