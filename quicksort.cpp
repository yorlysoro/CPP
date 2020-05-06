#include <iostream>

using namespace std;
void quicksort(int[],int,int);
int arreglo[6] = {10,2,5,3,7,4};
int x,y,aux,pivote,fin,inicio;

int main(void)
{
    int i;
    x = aux = pivote = fin = inicio = 0;
    cout << "Metodo Quicksort" << endl;

    cout << "Array desordenado" << endl;

    for(i = 0; i < 6; i++)
    {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    cout << "Arreglo ordenado" << endl;

    quicksort(arreglo,x,y);
    for(i = 0; i < 6; i++)
    {
       cout << arreglo[i] << " ";
     }
    cout << endl;

}

void quicksort(int[],int,int)
{
    x = 0;
    fin = y;
    inicio = x;
    pivote = arreglo[x];
    while(x <= y)
    {
        while(arreglo[x] < pivote)
        {
            x = x + 1;
        }
        while(arreglo[y] > pivote)
        {
            y = y - 1;
        }
        if(x <= y)
        {
            aux = arreglo[x];
            arreglo[x] = arreglo[y];
            arreglo[y] = aux;
            x = x + 1;
            y = y - 1;
        }
    }
    if(inicio < y)
    {
        quicksort(arreglo,inicio,y);
    }
    if(x < fin)
    {
        quicksort(arreglo,x,fin);
    }
}
