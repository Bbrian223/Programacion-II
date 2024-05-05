#pragma once

class Municipio{

private:

    int _numero;
    char _nombre[30];
    int _seccion;
    int _habitantes;
    bool _estado;

public:

    Municipio();
    Municipio(int num, const char* nombre, int sec, int hab, bool estado);

    void setNumero(int numero);
    void setNombre(const char* nombre);
    void setSeccion(int seccion);
    void setHabitantes(int habitantes);
    void setEstado(bool estado);

    int getNumero();
    const char* getNombre();
    int getSeccion();
    int getHabitantes();
    bool getEstado();

    void Cargar();
    void Mostrar();
};
