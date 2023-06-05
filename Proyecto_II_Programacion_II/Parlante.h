#pragma once
#include "Componente.h"

class Parlante : public Componente {
public:
	Parlante(string, string, string, string, double);
	virtual ~Parlante();
	string toString();
};