#include "Empresa.h"

Empresa::Empresa() : Cliente()
{
	this->cedulaJuridica = "";
	this->nombreEmpresa = "";
}

Empresa::Empresa(string nombrePais, string ciudadUbicacion, string cedulaJuridica, string nombreEmpresa) : Cliente(nombrePais, ciudadUbicacion)
{
	this->cedulaJuridica = cedulaJuridica;
	this->nombreEmpresa = nombreEmpresa;
}

Empresa::~Empresa()
{
}

// Getters
string Empresa::getCedulaJuridica() { return this->cedulaJuridica; }
string Empresa::getNombreEmpresa() { return this->nombreEmpresa; }


// Setters
void Empresa::setCedulaJuridica(string cedulaJuridica) { this->cedulaJuridica = cedulaJuridica; }
void Empresa::setNombreEmpresa(string nombreEmpresa) { this->nombreEmpresa = nombreEmpresa; }


// toString
string Empresa::toString()
{
	stringstream s;
	s << "Cedula Juridica: " << this->cedulaJuridica << endl;
	s << "Nombre de la empresa: " << this->nombreEmpresa << endl;
	s << "Nombre del Pais: " << this->nombrePais << endl;
	s << "Ciudad de Ubicacion: " << this->ciudadUbicacion << endl;

	return s.str();
}