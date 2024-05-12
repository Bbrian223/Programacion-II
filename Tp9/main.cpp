#include <iostream>
#include "funciones.h"


using namespace std;


int main()
{
    int opc;
    while(true){
        system("cls");
        cout<<"-----munu-----"<<endl;
        cout<<"1-  grabar registro"<<endl;
        cout<<"2-  listar registros"<<endl;
        cout<<"3-  grabar municipios"<<endl;
        cout<<"4-  listar municipios"<<endl;
        cout<<"5-  grabar categoria"<<endl;
        cout<<"6-  listar categoria"<<endl;
        cout<<"7-  municipios con menos de 200.000 habitantes"<<endl;
        cout<<"8-  seccion con mayor cantidad de habitantes"<<endl;
        cout<<"9-  categoria con mas empresas"<<endl;
        cout<<"10- empresas categoria 15"<<endl;
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

            cout<<"----------------------Empresas:-----------------------"<<endl;
            if(opc == 1)GrabarRegistro();
            else GrabarVariosRegistros();
            break;
        case 2:
            ListarRegistros();
            break;
        case 3:
            GrabarMunicipios();
            break;
        case 4:
            ListarMunicipios();
            break;
        case 5:
            GrabarCategoria();
            break;
        case 6:
            ListarCategoria();
            break;
        case 7:
            MunicipiosMasHabitantes();
            break;
        case 8:
            SeccionMasHabitantes();
            break;
        case 9:
            CategoriaMasEmpresaas();
            break;
        case 10:
            EmpresasCategQuince();
            break;
        case 0:
            return 0;
        }

    system("pause>nul");
    }

    return 0;
}
