#pragma once
#include <string>

class Moneda
{
private:
	//var
	string Tipo;
	int valor;
	ifstream monedas;
public:
	Moneda(string Tipo, int valor) {
		this->Tipo = ' ';
		this->valor = 0;
	}
	~Moneda(){}
	//Metodos
	void inicializarMoneda(Listas<Moneda>& moneda) {
		/*monedas.open("MONEDAS.txt", ios::in);
		if (monedas.fail()) {
			cout << "\nNo se pudo abrir el archivo.";
			system("pause");
		}
		while (!monedas.eof()) {
			//buscar una manera de 
			monedas << Tipo << valor;
			moneda.insertarAlFinal(Moneda(Tipo, valor));
		}
		monedas << Tipo << valor;
		*/
		FILE* monedas = fopen("MONEDAS.txt", "r"); //r=read, w=write
		while (fscanf(monedas, "%s,%d", Tipo, valor) !=EOF) {
			moneda.insertarAlFinal(Moneda(Tipo, valor));
		}

	}
};

