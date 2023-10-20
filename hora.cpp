#include<iostream>
using namespace std;
#include"hora.h"

void Hora::setHora(int h){
     if(8<=h && h<=22){
        _hora=h;
     }
     else{_hora=0;}
}
void Hora::setMinuto(int m){
    if(0<=m && m<60){
        _minuto=m;
    }
    else{_minuto=-1;}
}

int Hora::getHora(){return _hora;}
int Hora::getMinuto(){return _minuto;}

void Hora::cargarHora(){
    cout<<endl;
    cout<<"Ingresar hora del turno: ";
    cin>>_hora;
    cout<<"Ingresar minutos: ";
    cin>>_minuto;
}
