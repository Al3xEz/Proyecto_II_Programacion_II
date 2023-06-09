#include "Persona.h"

Persona::Persona() : Cliente()
{
	this->email = "";
	this->nacionalidad = "";
}

Persona::Persona(string cedula,string nombrePais, string ciudadUbicacion, string email, string nacionalidad) : Cliente(cedula,nombrePais, ciudadUbicacion)
{
	this->email = email;
	this->nacionalidad = nacionalidad;
}

Persona::~Persona()
{
}

// Getters
string Persona::getEmail() { return this->email; }
string Persona::getNacionalidad() { return this->nacionalidad; }


// Setters
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