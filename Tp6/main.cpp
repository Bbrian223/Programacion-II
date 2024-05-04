#include <iostream>
#include "casa.h"

using namespace std;

int main()
{
    Casa duplex;

    duplex.CargarCasa();
    cout<<endl<<endl;
    duplex.MostrarCasa();

    return 0;
}

/**

casas registra además la cantidad de ambientes, y la superficie construída;
departamentos registra la cantidad de ambientes, y si dispone o no de instalaciones complementarias (pileta, quincho, etc);
locales comerciales indica la zona (1: comercial; 2 mixta; 3 industrial)
terrenos registra si posee o no mejoras (‘A’: sin mejoras; ‘B’: asfalto; ‘C’: todos los servicios)


*/
