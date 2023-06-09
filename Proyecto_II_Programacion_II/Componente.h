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
	Componente();
	Componente(string, string, string, string, double);
	virtual ~Componente();
	virtual void setCategoria(string);
	virtual void setComponente(string);
	virtual void setModelo(string);
	virtual void setCaracteristica(string);
	virtual void setPrecioBase(double);
	virtual string getCategoria();
	virtual string getComponente();
	virtual string getModelo();
	virtual string getCaracteristica();
	virtual double getPrecioBase();
	virtual string toString() = 0;
};