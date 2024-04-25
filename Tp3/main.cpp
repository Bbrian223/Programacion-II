#include <iostream>
#include "Cliente.h"
#include "funciones.h"
#include <cstring>

using namespace std;

int main()
{
    const int tam = 2;
    Cliente clte[tam];
    Cliente aux;
    char dni[9];
    int opc;

    while(true){
        system("cls");
        cout<<"----------MENU------------"<<endl;
        cout<<"1. CARGAR LISTA DE CLIENTES"<<endl;
        cout<<"2. MOSTRAR LISTA DE CLIENTES"<<endl;
        cout<<"3. BUSCAR CLIENTES CON DNI MENORES A: "<<endl;
        cout<<"4. BUSCAR POS DE CLIENTE POR DNI:"<<endl;
        cout<<"5. BUSCAR CLIENTE POR DNI"<<endl;
        cout<<"6. CLIENTES CON FECHA DE NACIMIENTO ANTERIOR A: "<<endl;
        cout<<"OPCION: ";
        cin>>opc;
        system("cls");

        switch(opc){
        case 1:
            CargarListaClientes(clte,tam);
            break;
        case 2:
            MostrarListaClientes(clte,tam);
            break;
        case 3:
            CltesDniMenoresA(clte,tam);
            break;
        case 4:
            int pos;

            cout<<"Dni: ";
            cargarCadena(dni,8);
            pos = CltesDniPos(clte,tam,dni);

            cout<<endl<<endl;
            if(pos == -1)cout<<"No se encuentran clientes con ese numero de DNI";
            else cout<<"Cliente cargado en la posicion: "<<pos+1;

            break;
        case 5:
            cout<<"Dni: ";
            cargarCadena(dni,8);
            aux = BuscarCltePorDni(clte,tam,dni);

            cout<<endl<<endl;
            if(!strcmp(aux.getDni(),"-1"))cout<<"No se encuentran clientes con ese numero de DNI";
            else aux.Mostrar();
            break;
        case 6:

            break;
        case 0:
            return 0;
        }
    }

    return 0;
}













