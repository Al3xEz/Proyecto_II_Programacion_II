#include "Componente.h"
#include "Fuente.h"
#include "Procesador.h"
#include "Parlante.h"

#pragma once
class Sistema
{
private:
	string id;
	Componente* fuente;
	Componente* procesador;
	Componente* parlante;
	double precio;

public:
	Sistema();
	Sistema(string, Componente*, Componente*, Componente*);
	~Sistema();

	string getId();
	string getModeloFuente();
	string getModeloProcesador();
	string getModeloParlante();
	double getPrecio();

	string toString();

};
