#include "Cliente.h"

#pragma once
class Empresa : public Cliente
{
private:
	string nombreEmpresa;

public:
	Empresa();
	Empresa(string, string, string, string);
	~Empresa();

	// Getters
	string getNombreEmpresa();

	// Setters
	void setNombreEmpresa(string);

	// toString
	string toString();
};
