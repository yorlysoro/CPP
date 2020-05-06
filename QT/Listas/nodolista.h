#ifndef NODOLISTA_H
#define NODOLISTA_H
#include <iostream>
using namespace std;

class nodolista
{
public:
    nodolista(int elemento);
    ~nodolista();
    int ielemento;
    nodolista *siguiente;
};

#endif // NODOLISTA_H
