/* --------------------------------------------------------------------
*
* EIF204 Programación 2
* Proyecto 2
*
* 1-1874-0667 Julian Ramirez Salas. grupo 04
* 3-0531-0834 Jorge Solano Cordero. grupo 04
*
* -------------------------------------------------------------------
*/

#include "Persona.h"

//----------Contructores y destructor----------//

Persona::Persona() : Cliente()
{
	this->email = "";
	this->nacionalidad = "";
}

Persona::Persona(string cedula, string nombreC, string nombrePais, string ciudadUbicacion, string email, string nacionalidad) : Cliente(cedula,nombrePais, ciudadUbicacion)
{
	this->nombreC = nombreC;
	this->email = email;
	this->nacionalidad = nacionalidad;
}

Persona::~Persona()
{

}

// Getters
string Persona::getNombreC() { return this->nombreC; }
string Persona::getEmail() { return this->email; }
string Persona::getNacionalidad() { return this->nacionalidad; }


// Setters
void Persona::setNombreC(string nombreC) { this->nombreC = nombreC; }
void Persona::setEmail(string email) { this->email = email; }
void Persona::setNacionalidad(string nacionalidad) { this->nacionalidad = nacionalidad; }

// toString
string Persona::toString()
{
	stringstream s;
	s << "--------------------CLIENTE-------------------" << endl << endl;
	s << "Cedula: " << this->cedula << endl;
	s << "Nombre: " << this->nombreC << endl;
	s << "Email: " << this->email << endl;
	s << "Nacionalidad: " << this->nacionalidad << endl;
	s << "Nombre del Pais: " << this->nombrePais << endl;
	s << "Ciudad de Ubicacion: " << this->ciudadUbicacion << endl << endl;
	s << "----------------------------------------------" << endl << endl;
	return s.str();
}