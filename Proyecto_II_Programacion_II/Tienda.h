#include "Catalogo.h"

#include "Cliente.h"
#include "Empresa.h"
#include "Persona.h"

#include <cstdlib>

#pragma once
class Tienda
{

private:
	vector<Cliente*>* clientes;
	Catalogo* catalogo;

public:

	Tienda();
	Tienda(vector<Cliente*>*, Catalogo*);
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
	void eliminarSistema(string);
	void eliminarComponente(string);
	string mostrarSistemas();
	string mostrarComponentes();
	string mostrarFuentes();
	string mostrarProcesadores();
	string mostrarParlantes();

	bool resetComponentes();
	bool resetSistemas();

	Componente* getComponente(string);
	string componenteToString(string);
	string sistemaToString(string);
	bool existeComponente(string);
	bool existeSistema(string);
	
	double comprarSistemaPreconfig(string);
	double comprarSistemaPreconfigVirtual(string);
	double totalComponente(string);
};
