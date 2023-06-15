#include "Venta.h"

Venta::Venta(string id, Sistema* sistema, string modalidad, double envio)
{
	this->id = id;
	this->sistema = sistema;
	this->modalidad = modalidad;
	this->componente = nullptr;
	this->envio = envio;
	this->neto = sistema->getPrecioTotal();
	this->bruto = sistema->getPrecioBase();
}

Venta::Venta(string id, Sistema* sistema, string modalidad)
{
	this->id = id;
	this->sistema = sistema;
	this->modalidad = modalidad;
	this->componente = nullptr;
	this->envio = 0;
	this->neto = sistema->getPrecioTotal();
	this->bruto = sistema->getPrecioBase();
}

Venta::Venta(string id, Componente* componente)
{
	this->id = id;
	this->componente = componente;
	this->modalidad = "Presencial";
	this->sistema = nullptr;
	this->neto = componente->getPrecioBase() * 1.35;
	this->bruto = componente->getPrecioBase();
}

Venta::~Venta()
{
	delete sistema;
	delete componente;
}

string Venta::getModalidad()
{
	return this->modalidad;
}

double Venta::getNeto()
{
	return this->neto;
}

double Venta::getBruto()
{
	return this->bruto;
}

Sistema* Venta::getSistema()
{
	return this->sistema;
}

string Venta::FacturaSistemaPresencial()
{
	stringstream s;

	s << "--------------------FACTURA--------------------" << endl << endl;
	s << "-ID: " << this->id << endl;
	s << sistema->toString2() << endl;
	s << "-Precio base: " << sistema->getPrecioBase() << endl;
	s << "-Impuesto de venta: " << sistema->getPrecioBase() * 0.35 << endl;
	s << "-Precio total: " << sistema->getPrecioTotal() << endl << endl;
	s << "--------------------------------------------------" << endl << endl;

	return s.str();
}

string Venta::FacturaSistemaVirtual()
{
	stringstream s;

	s << "--------------------FACTURA--------------------" << endl << endl;
	s << "-ID: " << this->id << endl;
	s << sistema->toString2() << endl;
	s << "-Precio base: " << sistema->getPrecioBase() << endl;
	s << "-Impuesto de venta: " << sistema->getPrecioBase() * 0.35 << endl;
	s << "-Impuesto de envio: " << envio << endl;
	s << "-Precio total: " << sistema->getPrecioTotal() + envio << endl << endl;
	s << "--------------------------------------------------" << endl << endl;

	return s.str();
}

string Venta::FacturaComponentePresencial()
{
	stringstream s;

	s << "--------------------FACTURA--------------------" << endl << endl;
	s << "-ID: " << this->id << endl;
	s << componente->toString() << endl;
	s << "-Precio base: " << componente->getPrecioBase() << endl;
	s << "-Impuesto de venta: " << componente->getPrecioBase() * 0.35 << endl;
	s << "-Precio total: " << componente->getPrecioBase() * 1.35 << endl << endl;
	s << "--------------------------------------------------" << endl << endl;

	return s.str();
}
