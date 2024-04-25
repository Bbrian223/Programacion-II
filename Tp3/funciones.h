#pragma once
#include "fecha.h"
#include "Cliente.h"

void cargarCadena(char *palabra, int tamano);
void CargarListaClientes(Cliente *clte, int tam);
void MostrarListaClientes(Cliente *clte, int tam);
void CltesDniMenoresA(Cliente *clte, int tam);
int CltesDniPos(Cliente *clte, int tam, const char *dni);
Cliente BuscarCltePorDni(Cliente *clte, int tam, const char *dni);
