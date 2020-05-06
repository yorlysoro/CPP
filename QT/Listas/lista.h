#ifndef LISTA_H
#define LISTA_H
#include "nodolista.h"

class lista
{
public:
    lista();
    ~lista();
    bool ListaVacia();
    void ListaInsertar(int elemento);
    void ListaRecorrer();
    void ListaRemover();
    nodolista *primero;
};

#endif // LISTA_H
