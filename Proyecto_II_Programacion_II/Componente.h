#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Componente {
protected:
	string categoria;
	string componente;
	string modelo;
	string caracteristica;
	double precioBase;
public:
	//----------Contructores y destructor----------//
	Componente();
	Componente(string, string, string, string, double);
	virtual ~Componente();

	//Setters
	virtual void setCategoria(string);
	virtual void setComponente(string);
	virtual void setModelo(string);
	virtual void setCaracteristica(string);
	virtual void setPrecioBase(double);

	//Getters
	virtual string getCategoria();
	virtual string getComponente();
	virtual string getModelo();
	virtual string getCaracteristica();
	virtual double getPrecioBase();

	//toString
	virtual string toString() = 0;
};