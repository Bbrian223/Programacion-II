#include "archivoMunicipio.h"
#include <iostream>
#include <cstring>

using namespace std;

ArchivoMunicipio::ArchivoMunicipio(const char* nombre){
    strcpy(_nombre, nombre);
}

bool ArchivoMunicipio::grabarRegistro(Municipio reg){
    FILE* pFile;
    bool status;

    pFile = fopen(_nombre,"ab");
    if(pFile == nullptr) return false;

    status = fwrite(&reg,sizeof(reg),1,pFile);
    fclose(pFile);

    return status;
}

bool ArchivoMunicipio::listarRegistros(){
    FILE* pFile;
    Municipio reg;

    pFile = fopen(_nombre,"rb");
    if(pFile == nullptr) return false;

    while(fread(&reg,sizeof(reg),1,pFile) == 1){
        reg.Mostrar();
        cout<<endl;
    }

    fclose(pFile);

    return true;
}

int ArchivoMunicipio::buscarIndice(int num){
    FILE* pFile;
    Municipio reg;
    int pos = 0;

    pFile = fopen(_nombre,"rb");
    if(pFile == nullptr) return -1;

    while(fread(&reg,sizeof(reg),1,pFile) == 1){

        if(reg.getNumero() == num){
            fclose(pFile);
            return pos;
        }
        pos++;
    }

    fclose(pFile);
    return -1;
}

Municipio ArchivoMunicipio::buscarRegistro(int indice){
    FILE* pFile;
    Municipio reg;

    pFile = fopen(_nombre,"rb");
    if(pFile == nullptr) return reg;

    fseek(pFile,sizeof(reg)*indice,SEEK_SET);
    fread(&reg,sizeof(reg),1,pFile);
    fclose(pFile);

    return reg;
}

int ArchivoMunicipio::cantidadRegitros(){
    FILE* pFile;
    int tam=5;

    pFile = fopen(_nombre,"rb");
    if(pFile == nullptr) return -1;
    fseek(pFile,0,SEEK_END);
    tam = ftell(pFile) / sizeof(Municipio);
    fclose(pFile);

    return tam;
}


