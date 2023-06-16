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

#include "Cliente.h"

//----------Contructores y destructor----------//

Cliente::Cliente()
{
	this->cedula = "";
	this->nombrePais = "";
	this->ciudadUbicacion = "";

}

Cliente::Cliente(string cedula, string nombrePais, string ciudadUbicacion)
{
	this->cedula = cedula;
	this->nombrePais = nombrePais;
	this->ciudadUbicacion = ciudadUbicacion;
}

Cliente::~Cliente()
{
}

// Getters
string Cliente::getCedula() { return this->cedula; }
string Cliente::getNombrePais() { return this->nombrePais; }
string Cliente::getCiudadUbicacion() { return this->ciudadUbicacion; }


// Setters
void Cliente::setCedula(string cedula) { this->cedula = cedula; }
void Cliente::setNombrePais(string nombrePais) { this->nombrePais = nombrePais; }
void Cliente::setCiudadUbicacion(string ciudadUbicacion) { this->ciudadUbicacion = ciudadUbicacion; }