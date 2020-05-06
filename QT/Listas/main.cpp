#include <iostream>
#include "lista.h"
using namespace std;

int main(void)
{
    cout << "Listas!" << endl;
    lista *Lista = new lista();

    Lista->ListaInsertar(5);
    Lista->ListaInsertar(10);
    Lista->ListaInsertar(15);
    Lista->ListaRecorrer();
    Lista->ListaRemover();
    Lista->ListaRecorrer();
    return 0;
}
