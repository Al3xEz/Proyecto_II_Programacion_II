#include "Empresa.h"

Empresa::Empresa() : Cliente()
{
	this->nombreEmpresa = "";
}

Empresa::Empresa(string cedulaJuridica,string nombrePais, string ciudadUbicacion, string nombreEmpresa) : Cliente(cedulaJuridica,nombrePais, ciudadUbicacion)
{
	this->nombreEmpresa = nombreEmpresa;
}

Empresa::~Empresa()
{
}

// Getters
string Empresa::getNombreEmpresa() { return this->nombreEmpresa; }


// Setters
void Empresa::setNombreEmpresa(string nombreEmpresa) { this->nombreEmpresa = nombreEmpresa; }


// toString
string Empresa::toString()
{
	stringstream s;
	s << "Cedula Juridica: " << this->cedula << endl;
	s << "Nombre de la empresa: " << this->nombreEmpresa << endl;
	s << "Nombre del Pais: " << this->nombrePais << endl;
	s << "Ciudad de Ubicacion: " << this->ciudadUbicacion << endl;

	return s.str();
}