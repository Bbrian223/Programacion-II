#pragma once

class Fecha{
private:

    int _Dia;
    int _Mes;
    int _Anio;

    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);

public:

    Fecha(int dia=1, int mes=1, int anio=1900);

    int getDia();
    int getMes();
    int getAnio();

    void Cargar(int dia, int mes, int anio);
    void Mostrar();
};
