#include <iostream>
#include "terreno.h"

using namespace std;

int main()
{
    Terreno miterreno;

    miterreno.CargarTerreno();
    cout<<endl<<endl;
    miterreno.MostrarTerreno();

    return 0;
}

