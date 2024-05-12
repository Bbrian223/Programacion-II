#include "archivoCategoria.h"
#include <iostream>
#include <cstring>

using namespace std;

ArchivoCategoria::ArchivoCategoria(const char* nombre){
    strcpy(_nombre,nombre);
}

bool ArchivoCategoria::grabarRegistro(Categoria reg){
    FILE* pFile;
    bool status;

    pFile = fopen(_nombre,"ab");
    if(pFile == nullptr) return false;

    status = fwrite(&reg,sizeof(reg),1,pFile);
    fclose(pFile);

    return status;
}

bool ArchivoCategoria::listarRegistros(){
    FILE* pFile;
    Categoria reg;

    pFile = fopen(_nombre,"rb");
    if(pFile == nullptr) return false;

    while(fread(&reg,sizeof(reg),1,pFile) == 1){
        reg.Mostrar();
        cout<<endl;
    }

    fclose(pFile);

    return true;
}

int ArchivoCategoria::cantidadRegistros(){
    FILE* pFile;
    Categoria reg;
    int tam;

    pFile = fopen(_nombre,"rb");
    if(pFile == nullptr) return 0;
    fseek(pFile,0,SEEK_END);
    tam = ftell(pFile) / sizeof(reg);
    fclose(pFile);

    return tam;
}


