#ifndef _H_TIPOINMEDIATO_
#define _H_TIPOINMEDIATO_

using namespace std;

#include "Instruccion.hpp"
#include "Estado.hpp"

class TipoInmediato: public Instruccion{
    private:
        size_t r1, r2;
	int valor;
    public:
        TipoInmediato(NombreInstruccion nombre, size_t r1, size_t r2, int valor);
        void run(Estado &estado);
};

#endif