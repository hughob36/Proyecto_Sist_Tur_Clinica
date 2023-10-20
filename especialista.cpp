#include<iostream>
using namespace std;
#include"especialista.h"

void Especialista::setEspecialidad(int e){
    if(0<e && e<=5){
        _especilidad=e;
    }
    else{_especilidad=0;}
}


int Especialista::getEspecialidad(){
    return _especilidad;
}


void Especialista::cargarEspecialista(){
    cout<<endl;
    cout<<"Ingresar el especialista [1,5]: "<<endl;
    cout<<"1-Clinico. "<<endl;
    cout<<"2-Urologo. "<<endl;
    cout<<"3-Ginecologo. "<<endl;
    cout<<"4-Cardiologo. "<<endl;
    cout<<"5-Dermatologo. "<<endl;
    cin>>_especilidad;
}
