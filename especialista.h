#ifndef ESPECIALISTA_H_INCLUDED
#define ESPECIALISTA_H_INCLUDED

class Especialista{
    private:
        int _especilidad;  //1-clinico 2-urologo 3-ginecologo 4-cardiologo 5-dermatologo

    public:
        void setEspecialidad(int);

        int getEspecialidad();

        void cargarEspecialista();
};



#endif // ESPECIALISTA_H_INCLUDED
