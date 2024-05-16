#include <iostream>
#include <cstring>
using namespace std;

#include "parcial1l.h"

///punto 1
class JugadorGraduado{
private:

    int _dni;
    char _nombre[25];
    char _apellido[30];
    Fecha _fechaInscipcion;
    bool _estado;

public:

    void setDni(int dni){_dni = dni;}
    void setNombre(const char* nombre){strcpy(_nombre,nombre);}
    void setApellido(const char* apellido){strcpy(_apellido,apellido);}
    void setFechaInscripcion(Fecha fecha){_fechaInscipcion = fecha;}
    void setEstado(bool estado){_estado = estado;}

    int getDni(){return _dni;}
    const char* getNombre(){return _nombre;}
    const char* getApellido(){return _apellido;}
    Fecha getFecha(){return _fechaInscipcion;}
    bool getEstado(){return _estado;}
};

void punto1();
int buscarNivelEquipo(int numEquipo);
bool grabarJugadorGraduado(JugadorGraduado reg);

int main()
{
    punto1();
    return 0;
}

///punto1:
/**
Generar un archivo con los graduados que participan de equipos de nivel inicial.
Cada registro del archivo nuevo debe tener el siguiente formato:
DNI, nombre, apellido y fecha de inscripción*/

void punto1(){
    ArchivoJugadores archJug("jugadores.dat");

    Jugador jugador;
    JugadorGraduado aux;

    int cantReg,nivel;
    bool estado;

    cantReg = archJug.contarRegistros();
    for(int i=0; i<cantReg; i++){
        jugador = archJug.leerRegistro(i);
        nivel = buscarNivelEquipo(jugador.getIdEquipo());

        if(nivel != 1 || jugador.getClaustro() !=4) continue;

        aux.setDni(jugador.getDNI());
        aux.setNombre(jugador.getNombre());
        aux.setApellido(jugador.getApellido());
        aux.setFechaInscripcion(jugador.getFechaInscirpcion());
        aux.setEstado(true);

        if(grabarJugadorGraduado(aux)){
            cout<<"Registro exitoso!!"<<endl;
        }else{
            cout<<"Algo fallo..."<<endl;
        }

    }
}


int buscarNivelEquipo(int numEquipo){
    ArchivoEquipos archEquipo("equipos.dat");
    Equipo equipo;
    int cantReg;

    cantReg = archEquipo.contarRegistros();
    for(int i=0; i<cantReg; i++){
        equipo = archEquipo.leerRegistro(i);

        if(equipo.getIdEquipo() == numEquipo) return equipo.getNivel();

    }

    return 0;
}

bool grabarJugadorGraduado(JugadorGraduado reg){
    FILE* pFile;
    bool status;

    pFile = fopen("graduadoNivelInicial.dat","ab");
    if(pFile == nullptr) return false;

    status = fwrite(&reg,sizeof(reg),1,pFile);
    fclose(pFile);

    return status;
}













