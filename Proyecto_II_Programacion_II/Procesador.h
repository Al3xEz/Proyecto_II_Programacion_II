#pragma once
#include "Componente.h"

class Procesador : public Componente {
public:
	//----------Contructores y destructor----------//
	Procesador();
	Procesador(string, string, string, string, double);
	virtual ~Procesador();

	//toString
	string toString();
};