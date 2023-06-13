#include "Cliente.h"

#pragma once

class Persona : public Cliente
{
private:
	string nombreC;
	string email;
	string nacionalidad;
public:
	Persona();
	Persona(string, string, string, string, string, string);
	~Persona();

	// Getters
	string getNombreC();
	string getEmail();
	string getNacionalidad();

	// Setters
	void setNombreC(string);
	void setEmail(string);
	void setNacionalidad(string);

	// toString
	string toString();
};
