
#ifndef CLIENTE_BDD_BDD_H
#define CLIENTE_BDD_BDD_H


#include <vector>
#include "ipc/Cola.h"
#include "Persona.h"
#include "ipc/MemoriaCompartida.h"

using namespace std;

class BdD {

private:
    Cola<Persona>* consultas;
    long nroCliente;

public:
    BdD ( long nroCliente );
    ~BdD ();
    vector<Persona> buscar (Persona consulta);
    Persona insertar (Persona nuevaPersona);


};


#endif //CLIENTE_BDD_BDD_H
