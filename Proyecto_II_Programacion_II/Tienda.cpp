#include "Tienda.h"

Tienda::Tienda()
{
	this->catalogo = new Catalogo();
	this->clientes = new vector<Cliente*>;
}

Tienda::Tienda(vector<Cliente*>* clientes, Catalogo* catalogo)
{
	this->clientes = clientes;
	this->catalogo = catalogo;
}

Tienda::~Tienda()
{
	delete this->clientes;
	delete this->catalogo;
}

vector<Cliente*>* Tienda::getClientes()
{
	return this->clientes;
}

Catalogo* Tienda::getCatalogo()
{
	return catalogo;
}

void Tienda::setClientes(vector<Cliente*>* clientes)
{
	this->clientes = clientes;
}

void Tienda::setCatalogo(Catalogo* catalogo)
{
	this->catalogo = catalogo;
}

void Tienda::agregarCliente(Cliente* cliente)
{
	this->clientes->push_back(cliente);
}

void Tienda::eliminarCliente(string cedula)
{
	for (auto i = clientes->begin(); i != clientes->end(); ++i)
	{
		if ((*i)->getCedula() == cedula)
		{
			delete* i;
			clientes->erase(i);
			return;
		}
	}
}

string Tienda::mostrarClientes()
{
	stringstream s;

	// Verificando que el vector de clientes no esté vacio
	if (this->clientes->empty())
	{
		s << "No hay clientes registrados." << endl;
		return s.str();
	}

	for (Cliente* cliente : *clientes)
	{
		s << cliente->toString() << endl;
	}

	return s.str();
}

void Tienda::agregarSistema(Sistema* sistema)
{
	this->catalogo->agregarSistema(sistema);
}

void Tienda::agregarComponente(Componente* componente)
{
	this->catalogo->agregarComponente(componente);
}

void Tienda::eliminarSistema(string id)
{
	this->catalogo->eliminarSistema(id);
}

void Tienda::eliminarComponente(string modelo)
{
	this->catalogo->eliminarComponente(modelo);
}

string Tienda::mostrarSistemas()
{
	return this->catalogo->mostrarSistemas();
}

string Tienda::mostrarComponentes()
{
	return this->catalogo->mostrarComponentes();
}

string Tienda::mostrarFuentes()
{
	return this->catalogo->mostrarFuentes();
}

string Tienda::mostrarProcesadores()
{
	return this->catalogo->mostrarProcesadores();
}

string Tienda::mostrarParlantes()
{
	return this->catalogo->mostrarParlantes();
}

bool Tienda::resetComponentes()
{
	return this->catalogo->resetComponentes();
}

bool Tienda::resetSistemas()
{
	return this->catalogo->resetSistemas();
}

Componente* Tienda::getComponente(string modelo)
{
	return this->catalogo->getComponente(modelo);
}

string Tienda::componenteToString(string modelo)
{
	return this->catalogo->getComponente(modelo)->toString();
}

string Tienda::sistemaToString(string codigo)
{
	return this->catalogo->getSistema(codigo)->toString();
}

bool Tienda::existeComponente(string modelo)
{
	return this->catalogo->existeComponente(modelo);
}

bool Tienda::existeSistema(string codigo)
{
	return this->catalogo->existeSistema(codigo);
}

double Tienda::comprarSistemaPreconfig(string codigo) {
	return this->catalogo->getSistema(codigo)->getPrecio();
}

double Tienda::totalComponente(string modelo) {
	return (this->catalogo->getComponente(modelo)->getPrecioBase()) * 1.35;
}