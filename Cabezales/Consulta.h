#ifndef CONSULTA_H
#define CONSULTA_H

#include "Fecha.h"

using std::string;

class Consulta{
    private:
        Fecha fechaConsulta;
        string motivo;
    
    public:
        Consulta(); //Constructor por defecto
        void setFecha(Fecha fecha);
        void setNombre(string nombre);
        Fecha getFecha();    
};

#endif