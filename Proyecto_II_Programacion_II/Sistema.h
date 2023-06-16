#include "Componente.h"
#include "Fuente.h"
#include "Procesador.h"
#include "Parlante.h"

#pragma once
class Sistema
{
private:
	string cod;
	Componente* fuente;
	Componente* procesador;
	Componente* parlante;
	double precio;

public:
	//----------Contructores y destructor----------//
	Sistema();
	Sistema(string, Componente*, Componente*, Componente*);
	Sistema(Componente*, Componente*, Componente*);
	~Sistema();

	//Getters
	string getCod();
	string getModeloFuente();
	string getModeloProcesador();
	string getModeloParlante();
	double getPrecioBase();
	double getPrecioTotal();

	//toStrings
	string toString();
	string toString2();
};
