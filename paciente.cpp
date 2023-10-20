#include<iostream>
using namespace std;
#include"paciente.h"

void Paciente::setEspecialidad(Especialista e){
    especialista=e;
}
void Paciente::setTurnoAsignado(Turno t){
    turnoAsignado=t;
}

void Paciente::setEstado(bool e){
    estado=e;
}

Especialista Paciente::getEspecialidad(){
    return especialista;
}
Turno Paciente::getTurnoAsignado(){
    return turnoAsignado;
}

bool Paciente::getEstado(){
    return estado;
}

void Paciente::cargarPaciente(){
    cout<<endl;
    Persona::cargarPersona();
    especialista.cargarEspecialista();
    turnoAsignado.cargarTurno();
    estado=true;
}

 void Paciente::mostrarPaciente(){
    cout<<endl;
    cout<<"Nombre: "<<Persona::getNombre()<<endl;
    cout<<"Apellido: "<<Persona::getApellido()<<endl;
    cout<<"DNI: "<<Persona::getDni()<<endl;
    cout<<"Numero ESPECIALISTA: "<<especialista.getEspecialidad()<<endl;
    cout<<"Turno asignado: ";
    turnoAsignado.mostrarTurno();
 }





