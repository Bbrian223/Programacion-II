#pragma once

class Direccion{
private:

    char _calle[30];
    int _numero;
    int _codPostal;
    char _localidad[30];
    int _piso;

public:

    Direccion();
    Direccion(const char* calle, int num, int codPostal, const char* localidad, int piso);

    void setCalle(const char* calle);
    void setNumero(int numero);
    void setCodPostal(int codPostal);
    void setLocalidad(const char* localidad);
    void setPiso(int piso);

    const char* getCalle();
    int getNumero();
    int getCodPostal();
    const char* getLocalidad();
    int getPiso();

    void CargarDir();
    void MostrarDir();

};
