#pragma once
#include "Componente.h"

class Fuente : public Componente {
public:
	//----------Contructores y destructor----------//
	Fuente();
	Fuente(string, string, string, string, double);
	virtual ~Fuente();

	//toString
	string toString();
};