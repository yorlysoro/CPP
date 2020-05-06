#include <iostream>

using namespace std;

int main(void)
{
    int arreglo[6] = {10,2,5,3,7,4};
    int x,y,aux;

    cout << "Metodo de la Insercion" << endl;

    cout << "Array desordenado" << endl;

    for(x = 0; x < 6; x++)


        cout << arreglo[x] << " ";
    }
    cout << endl;

    cout << "Arreglo ordenado" << endl;

    for(x = 0; x < 6; x++)
    {
            aux = arreglo[x];
            y = x - 1;
            while(y >= 0 && aux < arreglo[y])
            {
               arreglo[y+1] = arreglo[y];
               arreglo[y] = aux;
               y -= 1;
            }
    }
    for(x = 0; x < 6; x++)
    {
       cout << arreglo[x] << " ";
     }
    cout << endl;
}


