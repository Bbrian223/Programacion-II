#include <iostream>
#include "Cliente.h"
#include "funciones.h"
#include <cstring>

using namespace std;

int main()
{
    const int tam = 2;
    Cliente clte[tam], aux;
    char dni[9];

    CargarListaClientes(clte,tam);
    cout<<endl<<endl;
    cout<<"dni: ";
    cargarCadena(dni,8);
    aux = BuscarCltePorDni(clte,tam,dni);

    if(!strcmp(aux.getDni(),"-1"))cout<<"El dni ingresado no se encuentra cargado";
    else aux.Mostrar();

    cout<<endl;

    return 0;
}
