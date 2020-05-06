#include <iostream>
using namespace std;
class NodoCola{
public:
    int ielemento;
    NodoCola *siguiente;
   NodoCola(int elemento)
   {
        ielemento = elemento;
        siguiente = NULL;
   }
};

class Cola{
public:
    NodoCola *Primero;
    Cola()
    {

    }
    ~Cola()
    {

     }
    bool ColaVacia()
    {
        return Primero == NULL;
    }
     void Insertar(int elemento)
    {
         if (ColaVacia())
            Primero = new NodoCola(elemento);
         else
         {
             NodoCola *Nuevo = new NodoCola(elemento);
             NodoCola *Aux = new NodoCola(0);
             Aux = Primero;
             while(Aux->siguiente != NULL)
                 Aux = Aux->siguiente;
             if(Aux->siguiente == NULL)
                 Aux->siguiente = Nuevo;
         }

     }
     void Recorrer()
     {
         NodoCola *Aux = new NodoCola(0);
         Aux = Primero;
         while(Aux != NULL)
         {
             cout << Aux->ielemento << " ";
             Aux = Aux->siguiente;
         }
         cout << endl;
     }
     int Remover()
     {
         if(ColaVacia())
             cout << "No ha elementos en la cola\n";
         else
         {
             NodoCola *Aux = new NodoCola(0);
             Aux = Primero;
            Primero = Aux->siguiente;
            int ElementoEliminado = Aux->ielemento;
            delete Aux;
            return ElementoEliminado;
         }
     }
};

int main(void)
{
    Cola *NCola = new Cola();
    NCola->Insertar(5);
    NCola->Insertar(10);
    NCola->Insertar(15);
    NCola->Recorrer();
    cout << "Se elemino el elemento " << NCola->Remover() << endl;
    NCola->Recorrer();
    return 0;
}
