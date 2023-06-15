#include "Empresa.h"
#include "Catalogo.h"

#pragma once
class Venta
{
private:
	int id;
	Sistema* sistema;
	Componente* componente;
	string modalidad;
	double envio;
	double neto;
	double bruto;

public:
	Venta(int, Sistema*, double);
	Venta(int, Sistema*);
	Venta(int, Componente*);
	~Venta();

	double getNeto();
	double getBruto();
	double getEnvio();
	string getModalidad();
	Sistema* getSistema();
	Componente* getComponente();

	string FacturaSistemaPresencial();
	string FacturaComponentePresencial();
	string FacturaSistemaVirtual();
};
