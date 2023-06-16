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

//----------Contructores y destructor----------//

Catalogo::Catalogo()
{
	this->sistemas = new vector<Sistema*>;
	this->componentes = new vector<Componente*>;

	recuperarComponentes();
	recuperarSistemas();
	//Con estos metodos recuperamos los componentes y sistemas que tenemos en nuestros archivos de texto
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

//Getters
vector<Sistema*>* Catalogo::getSistemas()
{
	return sistemas;
}

vector<Componente*>* Catalogo::getComponentes()
{
	return componentes;
}

//Para obtener un componente dado un modelo
Componente* Catalogo::getComponente(string modelo)
{
	for (Componente* componente : *componentes)
	{
		if (componente->getModelo() == modelo) { //Buscamos en el vector de componentes un componente que tenga el mismo modelo recibido.
			return componente; //Si se encuentra ese componente lo retornamos.
		}
	}

	return nullptr;
}

//Para obtener un sistema dado un codigo
Sistema* Catalogo::getSistema(string codigo)
{
	for (Sistema* sistema : *sistemas)
	{
		if (sistema->getCod() == codigo) {//Buscamos en el vector de componentes un componente que tenga el mismo modelo recibido.
			return sistema; //Si se encuentra ese sistema lo retornamos.
		}
	}

	return nullptr;
}


//Setters
void Catalogo::setSistemas(vector<Sistema*>* sistemas)
{
	this->sistemas = sistemas;
}

void Catalogo::setComponentes(vector<Componente*>* componentes)
{
	this->componentes = componentes;
}

//----------Metodos administracion----------//

//Agregar

bool Catalogo::agregarSistema(Sistema* sistema)
{
	ofstream archivo("sistemas.txt"); //Creamos un archivo de texto llamado sistemas (si esta creado se sobreescribe).

	if (archivo.is_open()) {
		this->sistemas->push_back(sistema); //Se agrega el sistema al vector de sistemas.

		for (Sistema* sist : *sistemas) {
			// Se escribe los modelos de cada componente del sistema en el archivo (separados por una tabulacion).
			archivo << sist->getCod() << "\t" << sist->getModeloFuente() << "\t" << sist->getModeloProcesador() << "\t" << sist->getModeloParlante() << "\t" << endl;
		}

		archivo.close();
		return true;
	}

	return false;
}

bool Catalogo::agregarComponente(Componente* componente)
{
	ofstream archivo("componentes.txt"); //Creamos un archivo de texto llamado componentes (si esta creado se sobreescribe).

	if (archivo.is_open()) {
		this->componentes->push_back(componente); //Se agrega el componentes al vector de componentes.
		for (Componente* comp : *componentes) {
			// Se escribe los datos de cada componente en el archivo (separados por una tabulacion).
			archivo << comp->getCategoria() << "\t" << comp->getComponente() << "\t" << comp->getModelo() << "\t" << comp->getCaracteristica() << "\t" << comp->getPrecioBase() << endl;
		}

		archivo.close();
		return true;
	}
	return false;
}

//Eliminar

bool Catalogo::eliminarSistema(string id)
{
	for (auto i = sistemas->begin(); i != sistemas->end(); ++i)
	{
		//Se recorre el vector de sistemas hasta encontrar un sistema que coincida con el id recibido.
		if ((*i)->getCod() == id)
		{
			ofstream archivo("sistemas.txt"); //Abrimos el archivo sistemas.txt para sobreescribirlo.

			if (archivo.is_open()) {
				sistemas->erase(i); //Eliminamos el sistema de la posicion (i).
				for (Sistema* sist : *sistemas) {
					// Se escribe los modelos de cada componente del sistema en el archivo (separados por una tabulacion).
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
		//Se recorre el vector de componentes hasta encontrar un componentes que coincida con el id recibido.
		if ((*i)->getModelo() == modelo)
		{
			ofstream archivo("componentes.txt");

			if (archivo.is_open()) {
				componentes->erase(i); //Eliminamos el componente de la posicion (i).
				for (Componente* comp : *componentes) {
					// Se escribe los datos de cada componente en el archivo (separados por una tabulacion).
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

//Editar

bool Catalogo::editarComponente(string modelo, Componente* componente)
{
	//Se recibe el modelo del componente que se desea editar y un nuevo componente con los datos nuevos.

	if (eliminarComponente(modelo) && agregarComponente(componente)) { //Eliminamos el componente viejo y agregamos el nuevo (manteniendo el mismo id).
		return true;
	}

	return false;
}

bool Catalogo::editarSistema(string codigo, Sistema* sistema)

//Se recibe el codigo del sistema que se desea editar y un nuevo sistema con los datos nuevos.
{
	if (eliminarSistema(codigo) && agregarSistema(sistema)) { //Eliminamos el componente viejo y agregamos el nuevo (manteniendo el mismo id).
		return true;
	}

	return false;
}

//----------Metodos para mostrar----------//

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

//Recuperacion de datos
bool Catalogo::recuperarComponentes()
{
	vector<Componente*>* componentesTemp = new vector<Componente*>; //Creamos un vector temporal para guardar la informacion.

	// Abrimos el archivo de componentes para lectura.
	ifstream archivo("componentes.txt");

	if (archivo.is_open()) {
		string linea;
		while (getline(archivo, linea)) {

			string categoria, componente, modelo, caracteristicas;
			double precio_base;

			// Leemos los valores separados por tabulaciones.
			istringstream iss(linea);
			getline(iss, categoria, '\t');
			getline(iss, componente, '\t');
			getline(iss, modelo, '\t');
			getline(iss, caracteristicas, '\t');
			iss >> precio_base;

			// Crear el objeto Componente correspondiente según la categoría.
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
				componentesTemp->push_back(nuevoComponente); //Si se pudo crear un componente se agrega al vector temporal.
			}
		}

		archivo.close();
		componentes = componentesTemp; //Igualamos nuestro vector componentes al vector temporal.
		return true;
	}
	else {
		return false;
	}
}

bool Catalogo::recuperarSistemas()
{
	vector<Sistema*>* sistemasTemp = new vector<Sistema*>; //Creamos un vector temporal para guardar la informacion.
	// Abrimos el archivo de sistemas para lectura.
	ifstream archivo("sistemas.txt");

	if (archivo.is_open()) {
		Componente* fuenteTemp;
		Componente* procesadorTemp;
		Componente* parlanteTemp;
		string linea;
		while (getline(archivo, linea)) {

			string id, modeloFuente, modeloProcesador, modeloParlante;

			// Leemos los valores separados por tabulaciones
			istringstream iss(linea);
			getline(iss, id, '\t');
			getline(iss, modeloFuente, '\t');
			getline(iss, modeloProcesador, '\t');
			iss >> modeloParlante;

			//Con los modelos leidos nos aprovechamos del metodo getComponente() para obtener los componentes.
			fuenteTemp = getComponente(modeloFuente);
			procesadorTemp = getComponente(modeloProcesador);
			parlanteTemp = getComponente(modeloParlante);

			//Creamos un sistema con el id y los componentes leidos, luego lo agregamos al vector temporal.
			sistemasTemp->push_back(new Sistema(id, fuenteTemp, procesadorTemp, parlanteTemp)); 
		}

		archivo.close();
		sistemas = sistemasTemp; //Igualamos nuestro vector componentes al vector temporal.
		return true;
	}
	else {
		return false;
	}
}

//Reset de datos

bool Catalogo::resetComponentes()
{
	ifstream respaldo("componentesRespaldo.txt"); //Abrimos el archivo de componentesRespaldo para lectura
	ofstream archivo("componentes.txt"); //Abrimos el archivo de componentes para escritura

	if (respaldo.is_open() && archivo.is_open()) {
		string linea;

		while (getline(respaldo, linea)) { //Leemos las lineas del archivo componentesRespaldo.
			archivo << linea << endl; //Escribimos las lineas en el archivo de componentes
		}

		respaldo.close();
		archivo.close();

		//Es importante llamar al metodo de recuperarComponentes() para que el vector se actualice en tiempo de ejecucion.
		this->recuperarComponentes(); 
		return true;
	}
	return false;
}

bool Catalogo::resetSistemas()
{
	ifstream respaldo("sistemasRespaldo.txt"); //Abrimos el archivo de sistemasRespaldo para lectura
	ofstream archivo("sistemas.txt"); //Abrimos el archivo de sistemas para escritura

	if (respaldo.is_open() && archivo.is_open()) {
		string linea;

		while (getline(respaldo, linea)) {//Leemos las lineas del archivo sistemasRespaldo.
			archivo << linea << endl; //Escribimos las lineas en el archivo de sistemas
		}

		respaldo.close();
		archivo.close();

		//Es importante llamar al metodo de recuperarSistemas() para que el vector se actualice en tiempo de ejecucion.
		this->recuperarSistemas();
		return true;
	}

	return false;

}

//Estos metodos verifican si un componente o sistema existe, dado un modelo o codigo

bool Catalogo::existeComponente(string modelo)
{
	for (Componente* componente : *componentes)
	{
		if (componente->getModelo() == modelo) { //Retornamos true si se encontró el componente
			return true;
		}
	}

	return false;
}

bool Catalogo::existeSistema(string codigo)
{
	for (Sistema* sistema : *sistemas)
	{
		if (sistema->getCod() == codigo) { //Retornamos true si se encontró el sistema
			return true;
		}
	}

	return false;
}

string Catalogo::sistemasMasVendidos()
{
	stringstream s;

	if (sistemas->at(0) != nullptr) {
		s << sistemas->at(0)->toString2();
	}

	if (sistemas->at(1) != nullptr) {
		s << sistemas->at(1)->toString2();
	}

	return s.str();
}