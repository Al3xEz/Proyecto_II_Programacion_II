#pragma once
#include "Componente.h"

class Fuente : public Componente {
public:
	Fuente();
	Fuente(string, string, string, string, double);
	virtual ~Fuente();
	string toString();
};