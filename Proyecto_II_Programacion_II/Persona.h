#include "Cliente.h"

#pragma once

class Persona : public Cliente
{
private:
	string cedula;
	string email;
	string nacionalidad;
public:

	Persona();
	Persona(string, string, string, string, string);
	~Persona();

	// Getters
	string getCedula();
	string getEmail();
	string getNacionalidad();

	// Setters
	void setCedula(string);
	void setEmail(string);
	void setNacionalidad(string);

	// toString
	string toString();
};

