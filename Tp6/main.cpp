#include <iostream>
#include "direccion.h"

using namespace std;

int main()
{
    Direccion dir;

    dir.CargarDir();
    cout<<endl<<endl;
    dir.MostrarDir();

    return 0;
}

/**
5)Una inmobiliaria opera con distintos tipos de inmuebles.
Para todos ellos registra los siguientes datos:

Direcci�n (calle, n�mero, c�digo postal, localidad, piso, etc.)
Fecha de ingreso
Fecha de operaci�n
Superficie total
Tipo de operaci�n (1: venta; 2: alquiler)

casas registra adem�s la cantidad de ambientes, y la superficie constru�da;
departamentos registra la cantidad de ambientes, y si dispone o no de instalaciones complementarias (pileta, quincho, etc);
locales comerciales indica la zona (1: comercial; 2 mixta; 3 industrial)
terrenos registra si posee o no mejoras (�A�: sin mejoras; �B�: asfalto; �C�: todos los servicios)

Dise�ar las clases que se consideren convenientes. Utilizar si corresponde herencia, composici�n o ambas.


*/
