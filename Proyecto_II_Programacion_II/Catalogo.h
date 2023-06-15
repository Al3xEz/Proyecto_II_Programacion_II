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
	Catalogo();
	Catalogo(vector<Sistema*>*, vector<Componente*>*);
	~Catalogo();

	//Getters
	vector<Sistema*>* getSistemas();
	vector<Componente*>* getComponentes();

	//Setters
	void setSistemas(vector<Sistema*>*);
	void setComponentes(vector<Componente*>*);

	//Metodos
	bool agregarSistema(Sistema*);
	bool agregarComponente(Componente*);
	bool eliminarSistema(string);
	bool eliminarComponente(string);
	string mostrarSistemas();
	string mostrarComponentes();
	string mostrarFuentes();
	string mostrarProcesadores();
	string mostrarParlantes();
	Componente* getComponente(string);
	bool recuperarComponentes();
	bool recuperarSistemas();
	bool resetComponentes();
	bool resetSistemas();
	bool existeComponente(string);
	bool existeSistema(string);
	Sistema* getSistema(string);
};
