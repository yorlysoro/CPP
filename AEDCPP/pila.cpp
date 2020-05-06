#include <iostream>

using namespace std;

class PilaNodo {
public:
    int ielemento;
   PilaNodo *siguiente;
    PilaNodo(int elemento)
    {
        ielemento = elemento;
        siguiente  = NULL;
    }
};

class Pila{
public:
   PilaNodo *Cima;
    Pila()
    {
    }
    ~Pila()
    {
    }
    bool PilaVacia()
    {
        return Cima == NULL;
    }

    void Insertar(int elemento)
    {
        if(PilaVacia())
        {
            Cima = new PilaNodo(elemento);
        }
        else{
            PilaNodo *Nuevo;
            Nuevo = new PilaNodo(elemento);
            Nuevo->siguiente = Cima;
            Cima = Nuevo;
        }
    }
    void Recorrer()
    {
        PilaNodo *Aux = new PilaNodo(0);
        Aux = Cima;
        if(PilaVacia())
            cout << "No hay elementos para recorrer\n";
        else
            while(Aux != NULL)
            {
                cout << Aux->ielemento << " ";
                Aux = Aux->siguiente;
             }
        cout << endl;
    }
    int Remover()
    {
        if(PilaVacia())
        {
            cout << "No hay elementos que remover\n";
        }
        else
        {
            PilaNodo *Aux = new PilaNodo(0);
            int ElementoEliminado;
            Aux = Cima;
            ElementoEliminado = Aux->ielemento;
            Cima = Aux->siguiente;
            delete Aux;
            return ElementoEliminado;
        }
    }
};

int main(int argc, char *argv[])
{
    Pila *NPila = new Pila();

    NPila->Insertar(5);
    NPila->Insertar(10);
    NPila->Insertar(15);
    NPila->Recorrer();
    cout << "Se ha removido el " << NPila->Remover() << endl;
    NPila->Recorrer();
    return 0;
}
