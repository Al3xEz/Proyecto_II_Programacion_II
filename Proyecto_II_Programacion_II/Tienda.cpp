/* --------------------------------------------------------------------
*
* EIF204 Programación 2
* Proyecto 2
*
* 1-1874-0667 Julian Ramirez Salas. grupo 04
* 3-0531-0834 Jorge Solano Cordero. grupo 04
*
* -------------------------------------------------------------------
*/

#include "Tienda.h"

//----------Contructores y destructor----------//

Tienda::Tienda()
{
	this->catalogo = new Catalogo();
	this->clientes = new vector<Cliente*>;
	this->ventas = new vector<Venta*>;
}

Tienda::Tienda(vector<Cliente*>* clientes, Catalogo* catalogo, vector<Venta*>* ventas)
{
	this->clientes = clientes;
	this->catalogo = catalogo;
	this->ventas = ventas;
}

Tienda::~Tienda()
{
	delete this->clientes;
	delete this->catalogo;
}

//Getters
vector<Cliente*>* Tienda::getClientes()
{
	return this->clientes;
}

vector<Venta*>* Tienda::getVentas()
{
	return this->ventas;
}

Catalogo* Tienda::getCatalogo()
{
	return this->catalogo;
}

//Para obtener un componente dado un modelo
Componente* Tienda::getComponente(string modelo)
{
	return this->catalogo->getComponente(modelo);
}

//Para obtener un sistema dado un codigo
Sistema* Tienda::getSistema(string codigo)
{
	return this->catalogo->getSistema(codigo);
}

//Setters
void Tienda::setClientes(vector<Cliente*>* clientes)
{
	this->clientes = clientes;
}

void Tienda::setCatalogo(Catalogo* catalogo)
{
	this->catalogo = catalogo;
}

void Tienda::setVentas(vector<Venta*>* ventas)
{
	this->ventas = ventas;
}

//----------Metodos administracion----------//

//Agregar

void Tienda::agregarCliente(Cliente* cliente)
{
	this->clientes->push_back(cliente);
}

void Tienda::agregarSistema(Sistema* sistema)
{
	this->catalogo->agregarSistema(sistema);
}

void Tienda::agregarComponente(Componente* componente)
{
	this->catalogo->agregarComponente(componente);
}

void Tienda::agregarVenta(Venta* venta)
{
	this->ventas->push_back(venta);
}

//Eliminar

void Tienda::eliminarCliente(string cedula)
{
	for (auto i = clientes->begin(); i != clientes->end(); ++i)
	{
		if ((*i)->getCedula() == cedula) //Buscamos un cliente que coincida con la cedula recibida
		{
			delete* i;
			clientes->erase(i); //Eliminamos el cliente
			return;
		}
	}
}

void Tienda::eliminarSistema(string id)
{
	this->catalogo->eliminarSistema(id);
}

void Tienda::eliminarComponente(string modelo)
{
	this->catalogo->eliminarComponente(modelo);
}

//Editar

bool Tienda::editarComponente(string modelo, Componente* componente)
{
	return this->catalogo->editarComponente(modelo, componente);
}

bool Tienda::editarSistema(string codigo, Sistema* sistema)
{
	return this->catalogo->editarSistema(codigo, sistema);
}

//----------Metodos para mostrar----------//

string Tienda::mostrarClientes() //Muestra todos los Clientes
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
		s << cliente->toString() << endl; //Llamando al toString de cada cliente
	}

	return s.str();
}

string Tienda::mostrarSistemas() //Muestra todos los Sistemas
{
	return this->catalogo->mostrarSistemas();
}

string Tienda::mostrarComponentes()//Muestra todos los Componentes
{
	return this->catalogo->mostrarComponentes();
}

string Tienda::mostrarFuentes() //Muestra todas las fuentes dentro del vector componentes
{
	return this->catalogo->mostrarFuentes();
}

string Tienda::mostrarProcesadores() //Muestra todos los procesadores dentro del vector componentes
{
	return this->catalogo->mostrarProcesadores();
}

string Tienda::mostrarParlantes() //Muestra todos los parlantes dentro del vector componentes
{
	return this->catalogo->mostrarParlantes();
}

string Tienda::mostrarVentas() //Muestra todas las ventas
{
	stringstream s;

	double bruto = 0;
	double neto = 0;

	// Verificando que el vector de ventas no esté vacio
	if (this->clientes->empty())
	{
		s << endl;
		s << "No hay ventas registrados." << endl;
		return s.str();
	}

	for (Venta* venta : *ventas)
	{//Dependiendo en que modalidad fue hecha la venta retorna una factura distinta
		if (venta->getModalidad() == "Presencial" && venta->getSistema() != nullptr) {
			s << venta->FacturaSistemaPresencial() << endl;
		}

		else if (venta->getModalidad() == "Virtual") {
			s << venta->FacturaSistemaVirtual() << endl;
		}

		else {
			s << venta->FacturaComponentePresencial() << endl;
		}
		//Se va sumando el precio neto y el precio bruto de cada venta, para obtener los totales
		neto += venta->getNeto();
		bruto += venta->getBruto();
	}

	//Mostramos el precio bruto total, precio neto total y las ganancias.
	s << "-Total Bruto: " << bruto << " dolares" << endl << endl;
	s << "-Total Neto: " << neto << " dolares" << endl << endl;
	s << "-Ganancias: " << neto * 0.35 << " dolares" << endl << endl << endl;

	return s.str();
}

//Muestra el toString de un componente, dado un modelo
string Tienda::componenteToString(string modelo)
{
	return this->catalogo->getComponente(modelo)->toString();
}

//Muestra el toString de un sistema, dado un codigo
string Tienda::sistemaToString(string codigo)
{
	return this->catalogo->getSistema(codigo)->toString();
}

//Reset de datos
bool Tienda::resetComponentes()
{
	return this->catalogo->resetComponentes();
}

bool Tienda::resetSistemas()
{
	return this->catalogo->resetSistemas();
}

//Estos metodos verifican si un componente o sistema existe, dado un modelo o codigo

bool Tienda::existeComponente(string modelo)
{
	return this->catalogo->existeComponente(modelo);
}

bool Tienda::existeSistema(string codigo)
{
	return this->catalogo->existeSistema(codigo);
}

string Tienda::sistemasMasVendidos()
{
	return catalogo->sistemasMasVendidos();
}

//Estos metodos devuelven el precio de un sistema o componente, dado un id.

double Tienda::comprarSistemaPreconfig(string codigo) {
	return this->catalogo->getSistema(codigo)->getPrecioTotal();
}

double Tienda::totalComponente(string modelo) {
	return (this->catalogo->getComponente(modelo)->getPrecioBase()) * 1.35;
}