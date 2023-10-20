#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

class Persona{
    protected:
        char _nombre[20];
        char _apellido[20];
        int _dni;

    public:
        const char *getNombre();
        const char *getApellido();
        int getDni();

        void setNombre(const char*);
        void setApellido(const char*);
        void setDni(int);

        void cargarPersona();
};


#endif // PERSONA_H_INCLUDED
