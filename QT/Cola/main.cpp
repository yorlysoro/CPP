#include <iostream>
#include "cola.h"

using namespace std;

int main(void)
{
    cout << "Cola Dinamica!" << endl;
    Cola *ColaD = new Cola();

    ColaD->ColaInsertar(5);
    ColaD->ColaInsertar(10);
    ColaD->ColaInsertar(15);
    ColaD->ColaRecorrer();
    ColaD->ColaRemover();
    ColaD->ColaRecorrer();
    delete ColaD;
    return 0;
}
