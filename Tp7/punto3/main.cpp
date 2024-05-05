#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    int opc;

    while(true){
        system("cls");
        cout<<"-----MENU-----"<<endl;
        cout<<"1- ALTA EMPRESA"<<endl;
        cout<<"2- BAJA EMPRESA"<<endl;
        cout<<"3- MODIFICAR CATEGORIA EMPRESA"<<endl;
        cout<<"4- LISTAR EMPRESAS"<<endl;
        cout<<"0- SALIR"<<endl;
        cout<<"--------------"<<endl;
        cout<<"OPCION: ";
        cin>>opc;
        system("cls");

        switch(opc){

        case 1:
            GrabarRegistro();
            break;
        case 2:
            EliminarRegistro();
            break;
        case 3:
            ModificarCategoria();
            break;
        case 4:
            ListarRegistros();
            break;
        case 0:
            return 0;
        }

    system("pause>nul");
    }

    return 0;
}
