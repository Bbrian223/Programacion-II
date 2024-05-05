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
        cout<<"3- municipios con menos de 200.000 habitantes"<<endl;
        cout<<"4- seccion con mayor cantidad de habitantes"<<endl;
        cout<<"5- listar Municipios"<<endl;
        cout<<"0- salir"<<endl;
        cout<<"--------------"<<endl;
        cout<<"OPCION: ";
        cin>>opc;
        system("cls");

        switch(opc){

        case 1:
            cout<<"1- grabar 1 registro"<<endl;
            cout<<"2- grabar 5 registros"<<endl;
            cin>>opc;
            system("cls");

            if(opc == 1)GrabarRegistro();
            else GrabarVariosRegistros();
            break;
        case 2:
            ListarRegistros();
            break;
        case 3:
            MunicipiosMasHabitantes();
            break;
        case 4:
            SeccionMasHabitantes();
            break;
        case 5:
            ListarMunicipios();
            break;
        case 0:
            return 0;
        }

    system("pause>nul");
    }

    return 0;
}
