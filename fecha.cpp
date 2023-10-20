#include<iostream>
using namespace std;
#include"fecha.h"

void Fecha::setDia(int d){
            if(0<d && d<=31){
                _dia=d;
            }
            else{_dia=0;}
}
void Fecha::setMes(int m){
            if(0<m && m<=12){_mes=m;}
            else{_mes=0;}
}
void Fecha::setAnio(int a){
        if(0<2023){_anio=a;}
        else{_anio=0;}
}

int Fecha::getDia(){
    return _dia;
}

int Fecha::getMes(){
    return _mes;
}

int Fecha::getAnio(){
    return _anio;
}

void Fecha::cargarFecha(){
    cout<<endl;
    cout<<"Ingresar dia: ";
    cin>>_dia;
    cout<<"Ingresar mes: ";
    cin>>_mes;
    cout<<"Ingresar Anio: ";
    cin>>_anio;
}


