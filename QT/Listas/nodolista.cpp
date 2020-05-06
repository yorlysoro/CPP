#include "nodolista.h"

nodolista::nodolista(int elemento)
{
    ielemento = elemento;
    siguiente = nullptr;
}
nodolista::~nodolista()
{
    cout << "destruyendo el nodolista" << endl;
}
