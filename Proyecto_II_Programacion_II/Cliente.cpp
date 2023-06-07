#include "Cliente.h"

Cliente::Cliente()
{
	this->nombrePais = "";
	this->ciudadUbicacion = "";

}

Cliente::Cliente(string nombrePais, string ciudadUbicacion)
{
	this->nombrePais = nombrePais;
	this->ciudadUbicacion = ciudadUbicacion;
}

Cliente::~Cliente()
{
}

// Getters
string Cliente::getNombrePais() { return this->nombrePais; }
string Cliente::getCiudadUbicacion() { return this->ciudadUbicacion; }


// Setters
void Cliente::setNombrePais(string nombrePais) { this->nombrePais = nombrePais; }
void Cliente::setCiudadUbicacion(string ciudadUbicacion) { this->ciudadUbicacion = ciudadUbicacion; }