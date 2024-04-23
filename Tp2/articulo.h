#pragma once

class Articulo{
private:
    char _CodArt[5];
    char _Descripcion[30];
    float _Precio;
    int _Stock;
    bool _Estado;

    void setCodArt(const char* cod);
    void setDesc(const char* desc);
    void setPrecio(float precio);
    void setStock(int stock);
    void setEstado(bool estado);

public:

    Articulo(const char* cod={"Null"}, const char* desc={"Null"}, float precio=-1, int stock=-1, bool estado=false);

    Articulo(char* desc);

    void Cargar(const char* cod, const char* desc, float precio, int stock, bool estado);
    void Mostrar();
    void SubirPrecio(int porcent);

    const char* getCodArt();
    const char* getDesc();
    float getPrecio();
    int getStock();
    bool getEstado();


};

