#include <iostream>
#include "investigador.h"
#include "funciones.h"

using namespace std;

int main()
{
const int tam = 2;
    Investigador inv[tam];
    int opc;

    while(true){
        system("cls");
        cout<<"----Menu----"<<endl;
        cout<<"1- Cargar Datos Investigador"<<endl;
        cout<<"2- Mostrar Datos Investigador"<<endl;
        cout<<"3- Mostrar Datos Personales"<<endl;
        cout<<"4- Modificar Direccion"<<endl;
        cout<<"0- Salir"<<endl;
        cout<<"opccion: "<<endl;
        cin>>opc;
        system("cls");

        switch(opc){
        case 1:
            CargarInvestigador(inv,tam);
            break;
        case 2:
            MostrarInvestigador(inv,tam);
            break;
        case 3:
            MostrarDatosPers(inv);
            break;
        case 4:
            int num;
            cout<<"Numero de empleado: ";
            cin>>num;
            CambiarDomicilio(inv,num-1);
            break;
        case 0:
            return 0;


        }
    system("pause>nul");
    }

    return 0;
}
