#pragma once

#include <iostream>
#include <sstream>

using namespace std;

class Cliente
{
protected:
	string cedula;
	string nombrePais;
	string ciudadUbicacion;

public:
	Cliente();
	Cliente(string,string, string);
	~Cliente();

	// Getters
	string getCedula();
	string getNombrePais();
	string getCiudadUbicacion();

	// Setters
	void setCedula(string);
	void setNombrePais(string);
	void setCiudadUbicacion(string);

	// toString
	virtual string toString() = 0;
};