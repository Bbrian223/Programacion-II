#pragma once
#include "persona.h"

class Investigador:public Persona{
private:
    int _undAcademica;
    int _categoria;
    int _especialidad;

    void setUnidad(int und);
    void setCategoria(int categoria);
    void setEspecialidad(int especialidad);

public:

    Investigador();
    Investigador(int unidadAc, int categoria, int especialidad);

    int getUnidad();
    int getCategoria();
    int getEspecialidad();

    void Cargar();
    void Mostrar();
    void MostrarDatosPers();
    void CambiarDom(const char* domicilio);
};
