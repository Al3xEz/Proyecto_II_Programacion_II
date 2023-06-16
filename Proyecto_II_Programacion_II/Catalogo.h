#include "Sistema.h"
#include <fstream>
#include <vector>

#pragma once
class Catalogo
{
private:
	vector<Sistema*>* sistemas;
	vector<Componente*>* componentes;

public:
	//----------Contructores y destructor----------//
	Catalogo();
	Catalogo(vector<Sistema*>*, vector<Componente*>*);
	~Catalogo();

	//Getters
	vector<Sistema*>* getSistemas();
	vector<Componente*>* getComponentes();
	Componente* getComponente(string); //Para obtener un componente dado un modelo
	Sistema* getSistema(string); //Para obtener un sistema dado un codigo

	//Setters
	void setSistemas(vector<Sistema*>*);
	void setComponentes(vector<Componente*>*);

	//----------Metodos administracion----------//

	//Agregar
	bool agregarSistema(Sistema*);
	bool agregarComponente(Componente*);
	
	//Eliminar
	bool eliminarSistema(string);
	bool eliminarComponente(string);
	
	//Editar
	bool editarComponente(string, Componente*);
	bool editarSistema(string, Sistema*);

	//----------Metodos para mostrar----------//
	string mostrarSistemas();
	string mostrarComponentes();
	string mostrarFuentes();
	string mostrarProcesadores();
	string mostrarParlantes();
	string sistemasMasVendidos();

	//Recuperacion de datos
	bool recuperarComponentes();
	bool recuperarSistemas();

	//Reset de datos
	bool resetComponentes();
	bool resetSistemas();

	//Verifican si un componente o sistema existe, dado un id
	bool existeComponente(string);
	bool existeSistema(string);
	
};
