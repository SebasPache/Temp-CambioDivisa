#pragma once
template <class Variable>
class Nodo
{
public:
	Variable datos;
	Nodo<Variable>* sig;
	Nodo<Variable>* prev;

	/*Nodo(Variable info) {
		datos = info;
		sig = nullptr;
		prev = nullptr;a
	}*/
};

