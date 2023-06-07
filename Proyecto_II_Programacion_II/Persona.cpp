#include "Persona.h"

Persona::Persona() : Cliente()
{
	this->cedula = "";
	this->email = "";
	this->nacionalidad = "";
}

Persona::Persona(string nombrePais, string ciudadUbicacion, string cedula, string email, string nacionalidad) : Cliente(nombrePais, ciudadUbicacion)
{
	this->cedula = cedula;
	this->email = email;
	this->nacionalidad = nacionalidad;
}

Persona::~Persona()
{
}

// Getters
string Persona::getCedula() { return this->cedula; }
string Persona::getEmail() { return this->email; }
string Persona::getNacionalidad() { return this->nacionalidad; }


// Setters
void Persona::setCedula(string cedula) { this->cedula = cedula; }
void Persona::setEmail(string email) { this->email = email; }
void Persona::setNacionalidad(string nacionalidad) { this->nacionalidad = nacionalidad; }

// toString
string Persona::toString()
{
	stringstream s;
	s << "Cedula: " << this->cedula << endl;
	s << "Email: " << this->email << endl;
	s << "Nacionalidad: " << this->nacionalidad << endl;
	s << "Nombre del Pais: " << this->nombrePais << endl;
	s << "Ciudad de Ubicacion: " << this->ciudadUbicacion << endl;

	return s.str();
}