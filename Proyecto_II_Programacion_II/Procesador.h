#pragma once
#include "Componente.h"

class Procesador : public Componente {
public:
	Procesador();
	Procesador(string, string, string, string, double);
	virtual ~Procesador();
	string toString();
};