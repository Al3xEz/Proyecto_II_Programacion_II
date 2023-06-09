#include "Cliente.h"

#pragma once

class Persona : public Cliente
{
private:
	string email;
	string nacionalidad;

public:
	Persona();
	Persona(string, string, string, string, string);
	~Persona();

	// Getters
	string getEmail();
	string getNacionalidad();

	// Setters
	void setEmail(string);
	void setNacionalidad(string);

	// toString
	string toString();
};
