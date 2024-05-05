#include "archivoEmpresa.h"
#include <iostream>
#include <cstring>

using namespace std;

ArchivoEmpresa::ArchivoEmpresa(const char* nombre){
    strcpy(_nombre,nombre);
}

bool ArchivoEmpresa::grabarRegistro(Empresa reg){
    FILE* pFile;
    bool status;

    pFile = fopen(_nombre,"ab");
    if(pFile == nullptr) return false;

    status = fwrite(&reg,sizeof(reg),1,pFile);
    fclose(pFile);

    return status;
}

bool ArchivoEmpresa::bajaRegistro(Empresa reg, int indice){
    FILE* pFile;
    bool status;

    pFile = fopen(_nombre,"rb+");
    if(pFile == nullptr) return false;

    fseek(pFile,sizeof(reg)*indice,SEEK_SET);
    status = fwrite(&reg,sizeof(reg),1,pFile);
    fclose(pFile);

    return status;
}

bool ArchivoEmpresa::listarRegistros(){
    FILE* pFile;
    Empresa reg;

    pFile = fopen(_nombre,"rb");
    if(pFile == nullptr) return false;

    while(fread(&reg,sizeof(reg),1,pFile) == 1){
        if(reg.getEstado() == false)continue;
        reg.Mostrar();
        cout<<endl;
    }

    fclose(pFile);

    return true;
}

int ArchivoEmpresa::cantidadRegitros(){
    FILE* pFile;
    int tam=5;

    pFile = fopen(_nombre,"rb");
    if(pFile == nullptr) return -1;
    fseek(pFile,0,SEEK_END);
    tam = ftell(pFile) / sizeof(Empresa);

    return tam;
}

Empresa ArchivoEmpresa::buscarRegistro(int pos){
    FILE* pFile;
    Empresa reg;

    pFile = fopen(_nombre,"rb");
    if(pFile == nullptr) return reg;

    fseek(pFile,sizeof(reg)*pos,SEEK_SET);
    fread(&reg,sizeof(reg),1,pFile);
    fclose(pFile);

    return reg;
}

int ArchivoEmpresa::buscarIndice(int num){
    FILE* pFile;
    Empresa reg;
    int pos = 0;

    pFile = fopen(_nombre,"rb");
    if(pFile == nullptr) return -1;

    while(fread(&reg,sizeof(reg),1,pFile) == 1){

        if(reg.getNumero() == num) {
		fclose(pFile);
		return pos;
	}
        pos++;
    }
	
    fclose(pFile);
    return -1;
}
