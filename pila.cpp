#include <iostream>

using namespace std;

class nodo{
    public:
    nodo (int v, nodo *sig = NULL){
        valor = v;
        siguiente = sig;
    }
    
    private:
    int valor;
    nodo *siguiente;
    
    friend class pila;
};


typedef nodo *pnodo;


class pila{
	public:
	pila() : ultimo(NULL) {};
	//~pila();
	
	void Push(int v);
	void Pop();
	void Cima();
	
	private:
	pnodo ultimo;
};


//pila::~pila()
//{
	//while(ultimo) Pop();
//}

void pila::Push(int v)
{
	pnodo nuevo;
	
	nuevo = new nodo(v,ultimo);
	ultimo = nuevo;
	cout << "Se insertado el dato " << v << " a la pila" << endl;
}

void pila::Pop()
{
	pnodo nodo;
	
	int v;
	
	if(!ultimo)
		cout << "La pila esta vacia" << endl;
	else
	{
		nodo = ultimo;
		ultimo = nodo->siguiente;
		v = nodo->valor;
		delete nodo;
		cout << "Se ha eleminado el dato " << v << " de la pila" << endl;
	}
}


int main()
{
	pila Pila;
	
	Pila.Push(20);
	Pila.Push(30);
	Pila.Pop();
	Pila.Push(60);
	
	
	return 0;
}
