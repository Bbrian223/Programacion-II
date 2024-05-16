#include <iostream>
#include <cstring>

using namespace std;

class Empleado{
private:

    char nombre[20];
    char apellido[20];
    int DNI;

public:
Empleado(const char *nom, const char *ape, int dni){

    strcpy(nombre, nom);

    strcpy(apellido, ape);

    if(dni>0){

            DNI=dni;

            return true;

    }

    return false;

}

};
int main()
{

    Empleado("nombre","apellido",123);


    cout << "Hello world!" << endl;
    return 0;
}
