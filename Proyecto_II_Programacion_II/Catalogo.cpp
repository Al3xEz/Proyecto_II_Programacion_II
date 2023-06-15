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

#include "Catalogo.h"

Catalogo::Catalogo()
{
	this->sistemas = new vector<Sistema*>;
	this->componentes = new vector<Componente*>;
	recuperarComponentes();
	recuperarSistemas();
}

Catalogo::Catalogo(vector<Sistema*>* sistemas, vector<Componente*>* componentes)
{
	this->sistemas = sistemas;
	this->componentes = componentes;
}

Catalogo::~Catalogo()
{
	delete sistemas;
	delete componentes;
}

vector<Sistema*>* Catalogo::getSistemas()
{
	return sistemas;
}

vector<Componente*>* Catalogo::getComponentes()
{
	return componentes;
}

void Catalogo::setSistemas(vector<Sistema*>* sistemas)
{
	this->sistemas = sistemas;
}

void Catalogo::setComponentes(vector<Componente*>* componentes)
{
	this->componentes = componentes;
}

bool Catalogo::agregarSistema(Sistema* sistema)
{
	ofstream archivo("sistemas.txt");

	if (archivo.is_open()) {
		this->sistemas->push_back(sistema);
		for (Sistema* sist : *sistemas) {
			// Escribir los modelos de cada componente del sistema en el archivo
			archivo << sist->getCod() << "\t" << sist->getModeloFuente() << "\t" << sist->getModeloProcesador() << "\t" << sist->getModeloParlante() << "\t" << endl;
		}

		archivo.close();
		return true;
	}
	return false;
}

bool Catalogo::agregarComponente(Componente* componente)
{
	ofstream archivo("componentes.txt");

	if (archivo.is_open()) {
		this->componentes->push_back(componente);
		for (Componente* comp : *componentes) {
			// Escribir los datos del componente en el archivo
			archivo << comp->getCategoria() << "\t" << comp->getComponente() << "\t" << comp->getModelo() << "\t" << comp->getCaracteristica() << "\t" << comp->getPrecioBase() << endl;
		}

		archivo.close();
		return true;
	}
	return false;
}

bool Catalogo::eliminarSistema(string id)
{
	for (auto i = sistemas->begin(); i != sistemas->end(); ++i)
	{
		if ((*i)->getCod() == id)
		{
			ofstream archivo("sistemas.txt");

			if (archivo.is_open()) {
				sistemas->erase(i);
				for (Sistema* sist : *sistemas) {
					// Escribir los modelos de cada componente del sistema en el archivo
					archivo << sist->getCod() << "\t" << sist->getModeloFuente() << "\t" << sist->getModeloProcesador() << "\t" << sist->getModeloParlante() << "\t" << endl;
				}

				archivo.close();
				return true;
			}
			return false;

		}
	}
	return false;
}

bool Catalogo::eliminarComponente(string modelo)
{
	for (auto i = componentes->begin(); i != componentes->end(); ++i)
	{
		if ((*i)->getModelo() == modelo)
		{
			ofstream archivo("componentes.txt");

			if (archivo.is_open()) {
				componentes->erase(i);
				for (Componente* comp : *componentes) {
					// Escribir los datos del componente en el archivo
					archivo << comp->getCategoria() << "\t" << comp->getComponente() << "\t" << comp->getModelo() << "\t" << comp->getCaracteristica() << "\t" << comp->getPrecioBase() << endl;
				}

				archivo.close();
				return true;
			}
			return false;
		}
	}
	return false;
}

bool Catalogo::editarComponente(string modelo, Componente* componente)
{
	if (eliminarComponente(modelo) && agregarComponente(componente)) {
		return true;
	}

	return false;
}

bool Catalogo::editarSistema(string codigo, Sistema* sistema)
{
	if (eliminarSistema(codigo) && agregarSistema(sistema)) {
		return true;
	}

	return false;
}

string Catalogo::mostrarSistemas()
{
	stringstream s;

	// Verificando que el vector de sistemas no esté vacio
	if (this->sistemas->empty())
	{
		s << "No hay sistemas registrados." << endl;
		return s.str();
	}

	//Mostrando la informacion de cada sistema
	for (Sistema* sistema : *sistemas)
	{
		s << sistema->toString() << endl;
	}

	return s.str();
}

string Catalogo::mostrarComponentes()
{
	stringstream s;

	// Verificando que el vector de Componentes no esté vacio
	if (this->componentes->empty())
	{
		s << "No hay componentes registrados." << endl;
		return s.str();
	}

	//Mostrando la informacion de cada componente
	for (Componente* componente : *componentes)
	{
		s << componente->toString() << endl;
	}

	return s.str();
}

string Catalogo::mostrarFuentes()
{
	stringstream s;

	// Verificando que el vector de Componentes no esté vacio
	if (this->componentes->empty())
	{
		s << "No hay fuentes registradas." << endl;
		return s.str();
	}

	//Mostrando la informacion de las fuentes
	for (Componente* componente : *componentes)
	{
		if (componente->getCategoria() == "Fuente de audio") {
			s << componente->toString() << endl;
		}
	}

	return s.str();
}

string Catalogo::mostrarProcesadores()
{
	stringstream s;

	// Verificando que el vector de Componentes no esté vacio
	if (this->componentes->empty())
	{
		s << "No hay fuentes registradas." << endl;
		return s.str();
	}

	//Mostrando la informacion de las fuentes
	for (Componente* componente : *componentes)
	{
		if (componente->getCategoria() == "Procesador de audio") {
			s << componente->toString() << endl;
		}
	}

	return s.str();
}

string Catalogo::mostrarParlantes()
{
	stringstream s;

	// Verificando que el vector de Componentes no esté vacio
	if (this->componentes->empty())
	{
		s << "No hay fuentes registradas." << endl;
		return s.str();
	}

	//Mostrando la informacion de las fuentes
	for (Componente* componente : *componentes)
	{
		if (componente->getCategoria() == "Parlante") {
			s << componente->toString() << endl;
		}
	}

	return s.str();
}

string Catalogo::sistemasMasVendidos()
{
	stringstream s;

	sistemas->at(0) != nullptr && s << sistemas->at(0)->toString2();
	sistemas->at(1) != nullptr && s << sistemas->at(1)->toString2();

	return s.str();
}

Componente* Catalogo::getComponente(string modelo)
{
	for (Componente* componente : *componentes)
	{
		if (componente->getModelo() == modelo) {
			return componente;
		}
	}

	return nullptr;
}

bool Catalogo::recuperarComponentes()
{
	vector<Componente*>* componentesTemp = new vector<Componente*>;
	// Abrir el archivo de texto para lectura
	ifstream archivo("componentes.txt");

	if (archivo.is_open()) {
		string linea;
		while (getline(archivo, linea)) {

			string categoria, componente, modelo, caracteristicas;
			double precio_base;

			// Leer los valores separados por tabulaciones
			istringstream iss(linea);
			getline(iss, categoria, '\t');
			getline(iss, componente, '\t');
			getline(iss, modelo, '\t');
			getline(iss, caracteristicas, '\t');
			iss >> precio_base;

			// Crear el objeto Componente correspondiente según la categoría
			Componente* nuevoComponente;
			if (categoria == "Fuente de audio") {

				nuevoComponente = new Fuente(categoria, componente, modelo, caracteristicas, precio_base);
			}
			else if (categoria == "Procesador de audio") {
				nuevoComponente = new Procesador(categoria, componente, modelo, caracteristicas, precio_base);
			}
			else if (categoria == "Parlante") {
				nuevoComponente = new Parlante(categoria, componente, modelo, caracteristicas, precio_base);
			}
			else {
				// Categoría no reconocida
				nuevoComponente = nullptr;
			}

			if (nuevoComponente != nullptr) {
				componentesTemp->push_back(nuevoComponente);
			}
		}

		archivo.close();
		componentes = componentesTemp;
		return true;
	}
	else {
		return false;
	}
}

bool Catalogo::recuperarSistemas()
{
	vector<Sistema*>* sistemasTemp = new vector<Sistema*>;
	// Abrir el archivo de texto para lectura
	ifstream archivo("sistemas.txt");

	if (archivo.is_open()) {
		Componente* fuenteTemp;
		Componente* procesadorTemp;
		Componente* parlanteTemp;
		string linea;
		while (getline(archivo, linea)) {

			string id, modeloFuente, modeloProcesador, modeloParlante;

			// Leer los valores separados por tabulaciones
			istringstream iss(linea);
			getline(iss, id, '\t');
			getline(iss, modeloFuente, '\t');
			getline(iss, modeloProcesador, '\t');
			iss >> modeloParlante;

			fuenteTemp = getComponente(modeloFuente);
			procesadorTemp = getComponente(modeloProcesador);
			parlanteTemp = getComponente(modeloParlante);

			// Crear el objeto Componente correspondiente según la categoría
			sistemasTemp->push_back(new Sistema(id, fuenteTemp, procesadorTemp, parlanteTemp));
		}

		archivo.close();
		sistemas = sistemasTemp;
		return true;
	}
	else {
		return false;
	}
}

bool Catalogo::resetComponentes()
{
	ifstream respaldo("componentesRespaldo.txt");
	ofstream archivo("componentes.txt");

	if (respaldo.is_open() && archivo.is_open()) {
		string linea;

		while (getline(respaldo, linea)) {
			archivo << linea << endl;
		}

		respaldo.close();
		archivo.close();

		this->recuperarComponentes();
		return true;
	}
	return false;
}

bool Catalogo::resetSistemas()
{
	ifstream respaldo("sistemasRespaldo.txt");
	ofstream archivo("sistemas.txt");

	if (respaldo.is_open() && archivo.is_open()) {
		string linea;

		while (getline(respaldo, linea)) {
			archivo << linea << endl;
		}

		respaldo.close();
		archivo.close();

		this->recuperarSistemas();
		return true;
	}

	return false;

}

bool Catalogo::existeComponente(string modelo)
{
	for (Componente* componente : *componentes)
	{
		if (componente->getModelo() == modelo) {
			return true;
		}
	}

	return false;
}

bool Catalogo::existeSistema(string codigo)
{
	for (Sistema* sistema : *sistemas)
	{
		if (sistema->getCod() == codigo) {
			return true;
		}
	}

	return false;
}

Sistema* Catalogo::getSistema(string codigo)
{
	for (Sistema* sistema : *sistemas)
	{
		if (sistema->getCod() == codigo) {
			return sistema;
		}
	}

	return nullptr;
}
