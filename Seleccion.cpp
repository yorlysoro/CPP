#include <iostream>

using namespace std;

int main(void)
{
    int arreglo[6] = {10,2,5,3,7,4};
    int x,y,aux,minimo;

    cout << "Metodo de la Insercion" << endl;

    cout << "Array desordenado" << endl;

    for(x = 0; x < 6; x++)
    {

        cout << arreglo[x] << " ";
    }
    cout << endl;

    cout << "Arreglo ordenado" << endl;

    for(x = 0; x < 6; x++)
    {
            minimo = x;
            for(y = x; y < 6;y++)
            {
                if(arreglo[y] < arreglo[minimo])
                    minimo = y;
                aux = arreglo[x];
               arreglo[x] = arreglo[minimo];
               arreglo[minimo] = aux;
            }
    }
    for(x = 0; x < 6; x++)
    {
       cout << arreglo[x] << " ";
     }
    cout << endl;
}



