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
	//----------Contructores y destructor----------//
	Tienda();
	Tienda(vector<Cliente*>*, Catalogo*, vector<Venta*>*);
	~Tienda();

	//Getters
	vector<Cliente*>* getClientes();
	vector<Venta*>* getVentas();
	Catalogo* getCatalogo();
	Componente* getComponente(string);
	Sistema* getSistema(string);

	//Setters
	void setClientes(vector<Cliente*>*);
	void setCatalogo(Catalogo*);
	void setVentas(vector<Venta*>*);

	//----------Metodos administracion----------//

	//Agregar
	void agregarCliente(Cliente*);
	void agregarSistema(Sistema*);
	void agregarComponente(Componente*);
	void agregarVenta(Venta*);

	//Eliminar
	void eliminarCliente(string);
	void eliminarSistema(string);
	void eliminarComponente(string);

	//Editar
	bool editarComponente(string, Componente*);
	bool editarSistema(string, Sistema*);

	//----------Metodos para mostrar----------//
	string mostrarClientes();
	string mostrarSistemas();
	string mostrarComponentes();
	string mostrarFuentes();
	string mostrarProcesadores();
	string mostrarParlantes();
	string mostrarVentas();
	string componenteToString(string);
	string sistemaToString(string);
	string sistemasMasVendidos();

	//Reset de datos
	bool resetComponentes();
	bool resetSistemas();

	//Verifican si un componente o sistema existe, dado un id.
	bool existeComponente(string);
	bool existeSistema(string);

	//Devuelven el precio de un sistema o componente, dado un id.
	double comprarSistemaPreconfig(string);
	double totalComponente(string);
};