#include <iostream>
#include <cstring>

using namespace std;

#include "parcialm1.h"

class ObraEnEjecucion{

private:

    char _codObra[5];
    char _direccion[30];
    int _provincia;
    bool _activo;

public:

    void setCodObra(const char* cod){strcpy(_codObra,cod);}
    void setDireccion(const char* direc){strcpy(_direccion,direc);}
    void setProvincia(int prov){_provincia = prov;}
    void setActivo(bool activo){_activo = activo;}

    const char* getCodObra(){return _codObra;}
    const char* getDireccion(){return _direccion;}
    int getProvincia(){return _provincia;}
    bool getActivo(){return _activo;}

    void Mostrar(){
        cout<<"------------------------------"<<endl;
        cout<<"codigo obra: "<<_codObra<<endl;
        cout<<"direccion: "<<_direccion<<endl;
        cout<<"provincia: "<<_provincia<<endl;
        cout<<"activo: "<<_activo<<endl;
        cout<<"------------------------------"<<endl;
    }
};

///--------------------funciones para comprobar--------------
ObraEnEjecucion leerRegistro(int pos){
    ObraEnEjecucion reg;
    FILE *p;
    p=fopen("obrasEnEjecucion.dat", "rb");
    if(p==NULL) return reg;
    fseek(p, sizeof reg*pos,0);
    fread(&reg, sizeof reg,1, p);
    fclose(p);
    return reg;
}
int contarRegistros(){
    FILE *p;
    p=fopen("obrasEnEjecucion.dat", "rb");
    if(p==NULL) return -1;
    fseek(p, 0,2);
    int tam=ftell(p);
    fclose(p);
    return tam/sizeof(ObraEnEjecucion);
}
void Mostrar(){
    ObraEnEjecucion reg;
    int cantReg;

    cantReg = contarRegistros();
    for(int i=0; i<cantReg; i++){
        reg = leerRegistro(i);
        reg.Mostrar();
        cout<<endl;
    }

}

///-----------------fin funciones para comprobar-------------

void punto1();
void punto2();
bool grabarObraEnEjeccion(ObraEnEjecucion reg);
int buscarMinimo(int *vec, int tam);

int main()
{
    //punto1(); --> sin validadcion de datos, no ejecutar de vuelta
    Mostrar();
    punto2();

    system("pause");
    return 0;
}
///punto 1:
///   Generar un archivo con el código de obra, la dirección y la provincia,
///   de las obras cuyo estado de ejecución sea "en ejecución".

void punto1(){

    ArchivoObras arch("obras.dat");
    ObraEnEjecucion obrasEjec;
    Obra reg;
    int cantReg;

    cantReg = arch.contarRegistros();
    for(int i=0; i<cantReg; i++){
        reg = arch.leerRegistro(i);

        if(reg.getEstadoEjecucion() != 3 || !reg.getActivo()) continue;

        obrasEjec.setCodObra(reg.getCodigoObra());
        obrasEjec.setDireccion(reg.getDireccion());
        obrasEjec.setProvincia(reg.getProvincia());
        obrasEjec.setActivo(true);

        if(!grabarObraEnEjeccion(obrasEjec)){
            cout<<"No se pudo abrir el archivo"<<endl;
            return;
        }
    }
}

bool grabarObraEnEjeccion(ObraEnEjecucion reg){
    FILE* pFile;
    bool status;

    pFile = fopen("obrasEnEjecucion.dat","ab");
    if(pFile == nullptr) return false;

    status = fwrite(&reg,sizeof(reg),1,pFile);
    fclose(pFile);

    return status;
}

///punto 2:
///  La provincia con menos proveedores
/// (ignorando las provincias sin proveedores).

void punto2(){
    Proveedor reg;
    ArchivoProveedores arch("proveedores.dat");
    int cantReg, result;
    int prov[24] = {0};

    cantReg = arch.contarRegistros();
    for(int i=0; i<cantReg; i++){
        reg = arch.leerRegistro(i);
        prov[reg.getProvincia()-1]++;
    }

    result = buscarMinimo(prov,24);
    cout<<endl<<"Provincia con menor cantidad de proveedores: "<<result+1<<endl;

}

int buscarMinimo(int *vec, int tam){
    int minimo = 0;

    for(int i=0; i<tam; i++){

        if(vec[i] == 0)continue;
        if(minimo == 0) minimo = vec[i];

        if(vec[minimo] > vec[i]) minimo = i;
    }

    return minimo;
}
