#ifndef CLIENTE_H
#define CLIENTE_H

#pragma once

#include <iostream>
#include <sstream>

using namespace std;

class Cliente
{
protected:
	string nombrePais;
	string ciudadUbicacion;

public:
	Cliente();
	Cliente(string, string);
	~Cliente();

	// Getters
	string getNombrePais();
	string getCiudadUbicacion();

	// Setters
	void setNombrePais(string);
	void setCiudadUbicacion(string);

	// toString
	virtual string toString() = 0;
};

#endif