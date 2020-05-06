#include "lista.h"
#include <iostream>
#include <cstdlib>
using namespace std;
lista::lista()
{

}

lista::~lista()
{
    cout << "Destruyendo la lista" << endl;
}

bool lista::ListaVacia()
{
    if(primero == nullptr)
        return true;
    else
        return false;
}

void lista::ListaInsertar(int elemento)
{
    if(ListaVacia())
        primero = new nodolista(elemento);
    else{
        nodolista *Aux = new nodolista(0);
        Aux = primero;
        while(Aux->siguiente != nullptr)
            Aux = Aux->siguiente;
        nodolista *Nuevo = new nodolista(elemento);
        Aux->siguiente = Nuevo;
    }
}

void lista::ListaRecorrer()
{
    if(ListaVacia())
        cout << "Lista Vacia" << endl;
    else
    {
        nodolista *Aux = new nodolista(0);
        Aux = primero;
        while(Aux != nullptr){
            cout << " " << Aux->ielemento;
            Aux = Aux->siguiente;
        }
        cout << endl;
    }
}

void lista::ListaRemover()
{
    if(ListaVacia())
        cout << "Lista Vacia" << endl;
    else
    {
        nodolista *Aux = new nodolista(0);
        Aux = primero;
        while(Aux->siguiente != nullptr)
            Aux = Aux->siguiente;
        cout << "Eliminado: " << Aux->ielemento << endl;
      delete Aux;
    }
}



