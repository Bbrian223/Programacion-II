#include "investigador.h"
#include <iostream>

using namespace std;

Investigador::Investigador(){
    Persona();
    _undAcademica = -1;
    _categoria = -1;
    _especialidad = -1;
}

Investigador::Investigador(int unidad, int categoria, int especialidad){
    setUnidad(unidad);
    setCategoria(categoria);
    setEspecialidad(especialidad);
}

void Investigador::setUnidad(int unidad){
    if(unidad < 1 && unidad > 30) unidad = 1;
    _undAcademica = unidad;
}

void Investigador::setCategoria(int categoria){
    if(categoria < 1 && categoria > 5) categoria = 1;
    _categoria = categoria;
}

void Investigador::setEspecialidad(int especialidad){
    if(especialidad < 1 && especialidad > 10) especialidad = 1;
    _especialidad = especialidad;
}

int Investigador::getUnidad(){return _undAcademica;}

int Investigador::getCategoria(){return _categoria;}

int Investigador::getEspecialidad(){return _especialidad;}

void Investigador::Cargar(){
    int unidad, categoria, especialidad;

    Persona::Cargar();
    cout<<"Unidad Academica: ";
    cin>>unidad;
    cout<<"Categoria: ";
    cin>>categoria;
    cout<<"Especialidad: ";
    cin>>especialidad;

    setUnidad(unidad);
    setCategoria(categoria);
    setEspecialidad(especialidad);
}

void Investigador::Mostrar(){
    Persona::MostrarP();
    cout<<"Unidad Academica: "<<_undAcademica<<endl;
    cout<<"Categoria: "<<_categoria<<endl;
    cout<<"Especialidad: "<<_especialidad<<endl;
}

void Investigador::MostrarDatosPers(){
    Persona::MostrarP();
}

void Investigador::CambiarDom(const char *domicilio){
    Persona::setDomicilio(domicilio);
}

