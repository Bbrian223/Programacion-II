#include <iostream>
#include "funciones.h"
#include "empleados.h"

using namespace std;

int main()
{
    const int tam = 2;
    Empleado empl[tam];
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
            CargarEmpleados(empl,tam);
            break;
        case 2:
            MostrarEmpleados(empl,tam);
            break;
        case 3:
            MostrarDatosPers(empl);
            break;
        case 4:
            int num;
            cout<<"Numero de empleado: ";
            cin>>num;
            CambiarDomicilio(empl, num-1);
            break;
        case 0:
            return 0;


        }
    system("pause>nul");
    }

    return 0;
}
