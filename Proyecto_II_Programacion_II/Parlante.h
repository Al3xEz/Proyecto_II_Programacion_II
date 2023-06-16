#pragma once
#include "Componente.h"

class Parlante : public Componente {
public:
	//----------Contructores y destructor----------//
	Parlante();
	Parlante(string, string, string, string, double);
	virtual ~Parlante();

	//toString
	string toString();
};