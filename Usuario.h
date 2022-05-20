#pragma once

class Usuario
{
private:
	string Nombre;
	int Edad;
	int dni;
	float dinero;
public:
	Usuario(string Nombre, int Edad, int dni, float dinero){
		this->Nombre = Nombre;
		this->Edad = Edad;
		this->dni = dni;
		this->dinero = dinero;
	}
	~Usuario(){}
	//Metodos
	void agregarUsuario() {

	}
};

