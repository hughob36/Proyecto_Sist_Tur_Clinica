///Proyecto: Sistema clinica
///Autor: Hugo Orlando Benitez
///Grupo 7.
///Laboratorio de Computacion II -> UTN G.Pacheco.

#include <iostream>
#include<cstring>

using namespace std;

#include"paciente.h"
#include"archivoControladores.h"


int main(){

    int opc;
    while(true){
        system("cls");
        cout<<"MENU TURNOS "<<endl;
        cout<<"********************** "<<endl;
        cout<<"1. ALTA TURNO "<<endl;
        cout<<"2. BAJA LOGICA TURNO"<<endl;
        cout<<"3. MODIFICAR TURNO "<<endl;
        cout<<"4. MOSTRAR TODOS LOS TURNOS "<<endl;
        cout<<"0. SALIR DEL PROGRAMA "<<endl;
        cout<<"********************** "<<endl;
        cout<<"OPCION "<<endl;
        cin>>opc;
        system("cls");

        switch(opc){

            case 1: if(altaTurno()){
                        cout<<endl;
                        cout<<"Alta TURNO..."<<endl;
                    }
                    else{
                        cout<<endl;
                        cout<<"ERROR al dar de alta..."<<endl;
                    }
                    break;
            case 2: if(bajaLogica()){
                       cout<<endl;
                       cout<<"Se hizo la baja logica."<<endl;
                    }
                    else{
                       cout<<endl;
                       cout<<"NO SE PUDO DAR DE BAJA."<<endl;
                    }
                    break;
            case 3: if(modificarTurno()){
                       cout<<endl;
                       cout<<"TURNO modificado..."<<endl;
                     }
                    else{
                       cout<<endl;
                       cout<<"NO SE PUDO MODIFICAR."<<endl;
                    }
                    break;
            case 4: if(mostrarPacient()){
                       cout<<endl;
                       cout<<"TURNOS EN ARCHIVOS."<<endl;
                    }
                    else{
                        cout<<endl;
                        cout<<"NO SE PUDO MOSTRAR."<<endl;
                    }
                    break;
            case 0:
                    cout<<endl;
                    cout << "Saliendo del programa..." << endl;
                    cout<<endl;
                    return 0;
                    break;
            default:
                    cout<<endl;
                    cout << "Opcion no valida. Ociones validas 1,2,3,4,5 o 0-Salir." << endl;
                    cout<<endl;
        }
    system("pause");
    }

    return 0;
}
