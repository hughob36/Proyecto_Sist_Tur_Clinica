#include<iostream>
using namespace std;
#include"turno.h"

void Turno::setFechaTurno(Fecha fe){
    fechaTurno=fe;
}

void Turno::setHoraTurno(Hora ho){
    horaTurno=ho;
}

Fecha Turno::getFechaTurno(){
    return fechaTurno;
}

Hora Turno::getHoraTurno(){
    return horaTurno;
}

void Turno::cargarTurno(){
    cout<<endl;
    fechaTurno.cargarFecha();
    horaTurno.cargarHora();
}

void Turno::mostrarTurno(){
    cout<<" "<<fechaTurno.getDia()<<"-"<<fechaTurno.getMes()<<"-"<<fechaTurno.getAnio();
    cout<<"  "<<horaTurno.getHora()<<":"<<horaTurno.getMinuto()<<endl;
}

