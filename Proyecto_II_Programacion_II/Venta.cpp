#include "Venta.h"

//----------Contructores y destructor----------//

Venta::Venta(int id, Sistema* sistema, double envio)
{
	this->id = id;
	this->sistema = sistema;
	this->componente = nullptr;
	this->envio = envio;
	this->modalidad = "Virtual";
	this->neto = sistema->getPrecioTotal();
	this->bruto = sistema->getPrecioBase();
}

Venta::Venta(int id, Sistema* sistema)
{
	this->id = id;
	this->sistema = sistema;
	this->componente = nullptr;
	this->envio = 0;
	this->modalidad = "Presencial";
	this->neto = sistema->getPrecioTotal();
	this->bruto = sistema->getPrecioBase();
}

Venta::Venta(int id, Componente* componente)
{
	this->id = id;
	this->sistema = nullptr;
	this->componente = componente;
	this->envio = 0;
	this->modalidad = "Presencial";
	this->neto = componente->getPrecioBase() * 1.35;
	this->bruto = componente->getPrecioBase();
}

Venta::~Venta()
{
	delete sistema;
	delete componente;
}

//Getters

double Venta::getNeto()
{
	return this->neto;
}

double Venta::getBruto()
{
	return this->bruto;
}

double Venta::getEnvio()
{
	return envio;
}

string Venta::getModalidad()
{
	return modalidad;
}

Sistema* Venta::getSistema()
{
	return this->sistema;
}

Componente* Venta::getComponente()
{
	return this->componente;
}

//Metodos para mostrar facturas

string Venta::FacturaSistemaPresencial()
{
	stringstream s;

	s << "--------------------FACTURA-----------------------" << endl << endl;
	s << "-ID: " << this->id << endl << endl;
	s << sistema->toString2();
	s << "-Precio base: " << sistema->getPrecioBase() << " dolares" << endl;
	s << "-Impuesto de venta: " << sistema->getPrecioBase() * 0.35 << " dolares" << endl;
	s << "-Precio total: " << sistema->getPrecioTotal() << " dolares" << endl << endl;
	s << "--------------------------------------------------" << endl << endl;

	return s.str();
}

string Venta::FacturaSistemaVirtual()
{
	stringstream s;

	s << "--------------------FACTURA-----------------------" << endl << endl;
	s << "-ID: " << this->id << endl << endl;
	s << sistema->toString2();
	s << "-Precio base: " << sistema->getPrecioBase() << " dolares" << endl;
	s << "-Impuesto de venta: " << sistema->getPrecioBase() * 0.35 << " dolares" << endl;
	s << "-Impuesto de envio: " << envio << endl;
	s << "-Precio total: " << sistema->getPrecioTotal() + envio << " dolares" << endl << endl;
	s << "--------------------------------------------------" << endl << endl;

	return s.str();
}

string Venta::FacturaComponentePresencial()
{
	stringstream s;

	s << "--------------------FACTURA-----------------------" << endl << endl;
	s << "-ID: " << this->id << endl << endl;
	s << componente->toString();
	s << "-Precio base: " << componente->getPrecioBase() << " dolares" << endl;
	s << "-Impuesto de venta: " << componente->getPrecioBase() * 0.35 << " dolares" << endl;
	s << "-Precio total: " << componente->getPrecioBase() * 1.35 << " dolares" << endl << endl;
	s << "--------------------------------------------------" << endl << endl;

	return s.str();
}
