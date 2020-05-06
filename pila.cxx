/*
 * pila.cxx
 * 
 * Copyright 2017 yorlys <yorlys@debian>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
class Pila
{
	class NodoPila
	{
		NodoPila* siguiente;
		int elemento;
		NodoPila(int x)
		{
			elemento = x;
			siguiente = NULL;
		}
	};
	NodoPila * cima;
	public:
		Pila()
		{
			cima = NULL;
		}
		void Insertar(int elemento);
		int Quitar();
		int CimaPila();
		int PilaVacia();
		void LimpiarPila();
		~Pila()
		{
			LimpiarPila();
		}
};
int Pila::PilaVacia()
{
	return cima == NULL;
}

void Pila::Insertar(int elemento)
{
	NodoPila* nuevo;
	
	nuevo = new NodoPila(elemento)
	nuevo->siguiente = cima;
	cima = nuevo;
}

int Pila:Quitar()
{
	if(PilaVacia())
		throw "Pila vacia no se pueden extraer elementos";
	int aux = cima->elemento;
	cima = cima->siguiente;
	return aux;
}

int Pila::CimaPila()
{
	if(PilaVacia())
		throw "Pila Vacia";
	return cima->elemento;
}

void Pila::LimpiarPila()
{
	NodoPila *n;
	while(!PilaVacia())
	{
		n = cima;
		cima = cima->siguiente;
		delete n;
	}
}


int main(int argc, char **argv)
{
	
	return 0;
}

