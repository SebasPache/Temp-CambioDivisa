#pragma once
#include "Nodo.h"
template <class Variable>
class Listas:
	public Nodo
{
private:
	Nodo<Variable>* ini;
	Nodo<Variable>* fin;
	size_t cant; //Tamaño de lista
public:
	Listas() {
		ini = fin = nullptr;
		cant = 0;
	}
	~Listas() {}

	//Metodos
	void insertarAlFrente(Variable val) {
		Nodo<Variable>* dato = new Nodo<Variable>(val);
		if (cant == 0)
			ini = dato;
		else {
			n->sig = ini;
			ini = dato;
		}
		++cant;
	} //Al frente

	void insertarAlFinal(Variable val) {
		Nodo<Variable>* dato = new Nodo<Variable>(val);
		if (ini == nullptr)
			ini = fin = dato;
		else {
			fin->sig = dato;
			fin = dato;
		}
		cant++;
	} //Al ultimo

	void print(function<void(Variable)> print) {
		Nodo<Variable>* aux = ini;
		while (aux->sig != nullptr) {
			print(aux->valor);
			aux = aux->sig;
		}
	} //Imprimir
};

