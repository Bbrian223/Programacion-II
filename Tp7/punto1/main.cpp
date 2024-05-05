#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    int opc;

    while(true){
        system("cls");
        cout<<"-----munu-----"<<endl;
        cout<<"1- grabar registro"<<endl;
        cout<<"2- listar registros"<<endl;
        cout<<"0- salir"<<endl;
        cout<<"--------------"<<endl;
        cout<<"OPCION: ";
        cin>>opc;
        system("cls");

        switch(opc){

        case 1:
            GrabarRegistro();
            break;
        case 2:
            ListarRegistros();
            break;
        case 0:
            return 0;
        }

    system("pause>nul");
    }

    return 0;
}
