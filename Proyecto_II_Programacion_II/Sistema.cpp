#include "Sistema.h"

Sistema::Sistema()
{
	this->id = "";
	this->fuente = nullptr;
	this->procesador = nullptr;
	this->parlante = nullptr;
	this->precio = 0.0;
}

Sistema::Sistema(string id, Componente* fuente, Componente* procesador, Componente* parlante)
{
	this->id = id;
	this->fuente = fuente;
	this->procesador = procesador;
	this->parlante = parlante;
	this->precio = (fuente->getPrecioBase() + procesador->getPrecioBase() + parlante->getPrecioBase()) * 1.35;
}

Sistema::~Sistema()
{
	delete fuente;
	delete procesador;
	delete parlante;
}

string Sistema::getId()
{
	return this->id;
}

string Sistema::getModeloFuente()
{
	return this->fuente->getModelo();
}

string Sistema::getModeloProcesador()
{
	return this->procesador->getModelo();
}

string Sistema::getModeloParlante()
{
	return this->parlante->getModelo();
}

double Sistema::getPrecio()
{
	return this->precio;
}

string Sistema::toString()
{

	stringstream s;
	s << "--------------------SISTEMA--------------------" << endl << endl;
	s << this->fuente->toString();
	s << this->procesador->toString();
	s << this->parlante->toString();
	s << "ID del Sistema: " << this->id << endl;
	s << "Precio Total del Sistema: " << this->precio << endl << endl;
	s << "----------------------------------------------" << endl << endl;
	return s.str();

}
