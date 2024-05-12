#pragma once

class Empresa{

private:

    int _numero;
    char _nombre[30];
    int _empleados;
    int _idCategoria;
    int _idMunicipio;
    bool _estado;

public:

    Empresa();
    Empresa(int num, const char* nombre, int empl, int categ, int municipio, bool estado);

    void setNumero(int num);
    void setNombre(const char* nombre);
    void setEmpleados(int empl);
    void setCategoria(int categoria);
    void setMunicipio(int municipio);
    void setEstado(bool estado);

    int getNumero();
    const char* getNombre();
    int getEmpleados();
    int getCategoria();
    int getMunicipio();
    bool getEstado();

    void Cargar();
    void Mostrar();

};




