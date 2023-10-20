#include<iostream>
#include<cstring>
using namespace std;
#include"persona.h"


void cargarCadena(char *palabra, int tam){
    int i = 0;
    fflush(stdin);
    for (i = 0 ; i < tam ; i++ ){
        palabra[i] = cin.get();
        if(palabra[i] == '\n') break;
    }
    palabra[i] = '\0';
    fflush(stdin);
}

const char* Persona::getNombre(){
    return _nombre;
}
const char* Persona::getApellido(){
    return _apellido;
}
int Persona::getDni(){
    return _dni;
}


void Persona::setNombre(const char *n){
    strcpy(_nombre,n);
}
void Persona::setApellido(const char *a){
    strcpy(_apellido,a);
}
void Persona::setDni(int d){
      _dni=d;
}

void Persona::cargarPersona(){
    cout<<endl;
    cout<<"Ingrese Nombre: ";
    cargarCadena(_nombre,19);
    cout<<"Ingresar Apellidos: ";
    cargarCadena(_apellido,19);
    cout<<"Ingresar DNI: ";
    cin>>_dni;
}





