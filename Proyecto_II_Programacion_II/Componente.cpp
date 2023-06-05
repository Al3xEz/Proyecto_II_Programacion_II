#include "Componente.h"

Componente::Componente(string cat, string com, string mod, string car, double pre) {
	categoria = cat;
	componente = com;
	modelo = mod;
	caracteristica = car;
	precioBase = pre;
}

Componente::~Componente(){

}

void Componente::setCategoria(string cat){
	categoria = cat;
}

void Componente::setComponente(string com){
	componente = com;
}

void Componente::setModelo(string mod){
	modelo = mod;
}

void Componente::setCaracteristica(string car){
	caracteristica = car;
}

void Componente::setPrecioBase(double pre){
	precioBase = pre;
}

string Componente::getCategoria(){
	return categoria;
}

string Componente::getComponente(){
	return componente;
}

string Componente::getModelo(){
	return modelo;
}

string Componente::getCaracteristica(){
	return caracteristica;
}

double Componente::getPrecioBase(){
	return precioBase;
}