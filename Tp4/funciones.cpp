#include "funciones.h"
#include <iostream>

using namespace std;

void CargarCadena(char *palabra, int tam){
    int i;
    fflush(stdin);

    for(i=0; i<tam; i++){
        palabra[i] = cin.get();

        if(palabra[i] == '\n') break;
    }

    palabra[i] = '\0';
    fflush(stdin);
}

