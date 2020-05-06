#include "nodocola.h"
#include <iostream>
using namespace std;
NodoCola::NodoCola(int ielemento)
{
    elemento = ielemento;
    siguiente = nullptr;
}
NodoCola::~NodoCola()
{
    cout << "Destruyendo nodocola" << endl;
}
