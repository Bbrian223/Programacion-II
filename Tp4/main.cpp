#include <iostream>
#include "funciones.h"
#include "empleados.h"

using namespace std;

int main()
{
    Empleado empl;
    int opc;

    while(true){
        system("cls");
        cout<<"----Menu----"<<endl;
        cout<<"1- Cargar Datos Emlpleado"<<endl;
        cout<<"2- Mostrar Datos Empleado"<<endl;
        cout<<"3- Mostrar Datos Personales"<<endl;
        cout<<"4- Modificar Direccion"<<endl;
        cout<<"0- Salir"<<endl;
        cout<<"opccion: "<<endl;
        cin>>opc;
        system("cls");

        switch(opc){
        case 1:
            empl.Cargar();
            break;
        case 2:
            empl.Mostrar();
            break;
        case 3:
            empl.MostrarP();
            break;
        case 4:
            char direccion[50];
            cout<<"direccion: ";
            CargarCadena(direccion,49);
            empl.CambiarDom(direccion);
            break;
        case 0:
            return 0;


        }
    system("pause>nul");
    }

    return 0;
}
