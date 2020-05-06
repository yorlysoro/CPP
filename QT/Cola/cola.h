#ifndef COLA_H
#define COLA_H
#include "nodocola.h"

class Cola
{
public:
    Cola();
    ~Cola();
    bool ColaVacia();
    void ColaInsertar(int elemento);
    void ColaRemover();
    void ColaRecorrer();
    NodoCola *primero;
};

#endif // COLA_H
