#pragma once
#include "articulo.h"

void cargarCadena(char *palabra, int tamano);
void cargarArticulos(Articulo *art, int tam);
void mostrarArticulos(Articulo *art, int tam);
void filtrarArtPrecio(Articulo *art, int tam, float comparacion);
int BuscarPosArt(Articulo *art, int tam);
Articulo BuscarArt(Articulo *art, int tam);
int BuscarArtStock(Articulo *art, int tam, int maximo);
void AumentarPrecios(Articulo *art, int tam, int porcent);
