#include "Empresa.h"
#include "Catalogo.h"

#pragma once
class Venta
{
private:
	string id;
	Sistema* sistema;
	Componente* componente;
	string modalidad;
	double envio;
	double neto;
	double bruto;

public:
	Venta(string, Sistema*, string, double);
	Venta(string, Sistema*, string);
	Venta(string, Componente*);
	~Venta();

	string getModalidad();
	double getNeto();
	double getBruto();
	Sistema* getSistema();

	string FacturaSistemaPresencial();
	string FacturaComponentePresencial();
	string FacturaSistemaVirtual();
};
