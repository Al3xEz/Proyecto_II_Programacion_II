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
	//----------Contructores y destructor----------//
	Venta(int, Sistema*, double);
	Venta(int, Sistema*);
	Venta(int, Componente*);
	~Venta();

	//Getters
	double getNeto();
	double getBruto();
	double getEnvio();
	string getModalidad();
	Sistema* getSistema();
	Componente* getComponente();

	//Metodos para mostrar facturas
	string FacturaSistemaPresencial();
	string FacturaComponentePresencial();
	string FacturaSistemaVirtual();
};
