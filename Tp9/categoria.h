#pragma once

class Categoria{

private:

    int _numero;
    char _nombre[50];
    bool _estado;

public:

    Categoria();
    Categoria(int num, const char* nombre, bool estado);

    void setNumero(int num);
    int getNumero();

    void setNombre(const char* nombre);
    const char* getNombre();

    void setEstado(bool estado);
    bool getEstado();

    void Cargar();
    void Mostrar();

};
