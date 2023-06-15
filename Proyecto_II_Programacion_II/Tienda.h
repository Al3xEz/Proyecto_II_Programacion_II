#include "Catalogo.h"
#include "Cliente.h"
#include "Empresa.h"
#include "Persona.h"
#include "Venta.h"
#include <cstdlib>
#pragma once
class Tienda
{

private:
	vector<Cliente*>* clientes;
	vector<Venta*>* ventas;
	Catalogo* catalogo;

public:

	Tienda();
	Tienda(vector<Cliente*>*, Catalogo*, vector<Venta*>*);
	~Tienda();

	vector<Cliente*>* getClientes();
	Catalogo* getCatalogo();

	void setClientes(vector<Cliente*>*);
	void setCatalogo(Catalogo*);

	void agregarCliente(Cliente*);
	void eliminarCliente(string);
	string mostrarClientes();

	void agregarSistema(Sistema*);
	void agregarComponente(Componente*);
	void agregarVenta(Venta*);
	void eliminarSistema(string);
	void eliminarComponente(string);
	bool editarComponente(string, Componente*);
	bool editarSistema(string, Sistema*);

	string mostrarSistemas();
	string mostrarComponentes();
	string mostrarFuentes();
	string mostrarProcesadores();
	string mostrarParlantes();
	string mostrarVentas();

	bool resetComponentes();
	bool resetSistemas();

	Componente* getComponente(string);
	string componenteToString(string);
	string sistemaToString(string);
	bool existeComponente(string);
	bool existeSistema(string);

	string sistemasMasVendidos();

	double comprarSistemaPreconfig(string);
	double totalComponente(string);
};