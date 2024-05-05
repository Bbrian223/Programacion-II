#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    int opc;

    while(true){
        system("cls");
        cout<<"-----MENU-----"<<endl;
        cout<<"1- Grabar registro"<<endl;
        cout<<"2- Listar registros"<<endl;
        cout<<"3- Cantidad de empresas por municipio"<<endl;
        cout<<"4- Empresas con mas de 200 empleados"<<endl;
        cout<<"5- Categoria de empresa con mas empleados"<<endl;
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
            ListarRegistros();
            break;
        case 3:
            EmpresasPorMunicipio();
            break;
        case 4:
            EmpresasMasEmpleados();
            break;
        case 5:
            CategoriaMasEmpleados();
            break;
        case 0:
            return 0;
        }

    system("pause>nul");
    }

    return 0;
}
