#include "Cliente.h"

#pragma once
class Empresa : public Cliente
{
private:
	string nombreEmpresa;
	string cedulaJuridica;

public:
	Empresa();
	Empresa(string, string, string, string);
	~Empresa();

	// Getters
	string getNombreEmpresa();
	string getCedulaJuridica();

	// Setters
	void setNombreEmpresa(string);
	void setCedulaJuridica(string);

	// toString
	string toString();
};
