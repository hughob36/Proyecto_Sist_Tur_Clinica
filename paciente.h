#ifndef PACIENTE_H_INCLUDED
#define PACIENTE_H_INCLUDED

#include"persona.h"
#include"turno.h"
#include"especialista.h"

class Paciente:public Persona{
    private:
        Especialista especialista;
        Turno turnoAsignado;
        bool estado;

    public:

        void setEspecialidad(Especialista);
        void setTurnoAsignado(Turno);
        void setEstado(bool);

        Especialista getEspecialidad();
        Turno getTurnoAsignado();
        bool getEstado();

        void cargarPaciente();
        void mostrarPaciente();

};




#endif // PACIENTE_H_INCLUDED
