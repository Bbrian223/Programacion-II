#include <iostream>
#include "funciones.h"
#include "casa.h"
#include "departamento.h"
#include "locales.h"
#include "terreno.h"

using namespace std;

int main()
{   Casa miCasa;
    Departamento miDep;
    Locales miLocal;
    Terreno miTerreno;

    int opc, opc2;

    while(true){
        system("cls");
        cout<<"------Menu:-----"<<endl;
        cout<<"-1 Cargar un Inmueble"<<endl;
        cout<<"-2 Mostrar un Inmueble"<<endl;
        cout<<"-0 Salir"<<endl;
        cout<<"----------------"<<endl;
        cout<<"Opcion: "<<endl;
        cin>>opc;
        system("cls");

        switch(opc){

            case 1:
                opc2 = opciones();

                if(opc2 == 1) miCasa.CargarCasa();
                if(opc2 == 2) miDep.CargarDep();
                if(opc2 == 3) miLocal.CargarLocal();
                if(opc2 == 4) miTerreno.CargarTerreno();

            break;

            case 2:
                opc2 = opciones();

                if(opc2 == 1) miCasa.MostrarCasa();
                if(opc2 == 2) miDep.MostrarDep();
                if(opc2 == 3) miLocal.MostrarLocal();
                if(opc2 == 4) miTerreno.MostrarTerreno();

            break;

            case 0:
                return 0;
        }

        system("pause>nul");
    }


    return 0;
}

