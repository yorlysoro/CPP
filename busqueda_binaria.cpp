#include <iostream>

using namespace std;

int FnIntBusquedaBinaria(int lista[], int dato);

void SbBuscar(int lista[],int dato);

int main()
{
    int lista[16] = {12,45,78,9,6,5,4,2,1,0,12,45,78,63,25,98};
    SbBuscar(lista,63);
}

int FnIntBusquedaBinaria(int lista[], int dato)
{
    int izquierda, derecha, medio;
    izquierda = 0;
    derecha = 15;
    while(izquierda <= derecha)
    {
        medio = (izquierda+derecha)/2;
        if(dato == lista[medio])
            return medio;
        else if(dato < lista[medio])
            derecha = medio - 1;
        else
            izquierda = medio + 1;
    }
    return false;
}

void SbBuscar(int lista[], int dato)
{
    if(!FnIntBusquedaBinaria(lista,dato))
        cout << "El dato no se encontro" << endl;
    else
        cout << "Se encontro en la posicion " << FnIntBusquedaBinaria(lista,dato) << endl;
}
