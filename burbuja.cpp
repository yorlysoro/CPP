#include <iostream>

using namespace std;

int main(void)
{
    int arreglo[6] = {10,2,5,3,7,4};
    int x,y,aux;

    cout << "Metodo de la burbuja" << endl;

    cout << "Array desordenado" << endl;

    for(x = 0; x < 6; x++)
    {
        cout << arreglo[x] << " ";
    }
    cout << endl;

    cout << "Arreglo ordenado" << endl;

    for(x = 0; x < 6; x++)
    {
            for(y = y + 1; y < 6; y++)
            {
                if(arreglo[y] > arreglo[x])
                {
                    aux = arreglo[y];
                    arreglo[y] = arreglo[x];
                    arreglo[x] = aux;
                }
            }
    }
    for(x = 0; x < 6; x++)
    {
       cout << arreglo[x] << " ";
     }
    cout << endl;
}

