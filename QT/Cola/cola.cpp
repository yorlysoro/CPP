#include "cola.h"
#include <iostream>
using namespace std;
Cola::Cola()
{

}
Cola::~Cola()
{
   cout << "destruyendo la cola" << endl;
}

bool Cola::ColaVacia()
{
    if(primero == nullptr)
        return true;
    else
        return false;
}

void Cola::ColaInsertar(int elemento)
{
    if(ColaVacia())
     {
        primero = new NodoCola(elemento);
    }
    else
    {
        NodoCola *Aux = new NodoCola(0);
        Aux = primero;
        while(Aux->siguiente != nullptr)
            Aux = Aux->siguiente;
        NodoCola *Nuevo = new NodoCola(elemento);
        Aux->siguiente = Nuevo;
    }
}
void Cola::ColaRemover()
{
    if(ColaVacia())
        cout << "La cola esta vacia" << endl;
    else
    {
        NodoCola *Aux = new NodoCola(0);
        Aux = primero;
        primero = Aux->siguiente;
        cout << "Se ha eliminado " << Aux->elemento << endl;
        delete Aux;
    }
}

void Cola::ColaRecorrer()
{
    NodoCola *Aux = new NodoCola(0);
    Aux = primero;
    while(Aux != nullptr){
        cout << " " << Aux->elemento;
        Aux =  Aux->siguiente;
    }
    cout << endl;

 }
