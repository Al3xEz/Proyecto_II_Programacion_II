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

#include "Componente.h"

//----------Contructores y destructor----------//

Componente::Componente()
{
	categoria = "";
	componente = "";
	modelo = "";
	caracteristica = "";
	precioBase = 0;
}

Componente::Componente(string cat, string com, string mod, string car, double pre) {
	categoria = cat;
	componente = com;
	modelo = mod;
	caracteristica = car;
	precioBase = pre;
}

Componente::~Componente(){

}

//Setters

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

//Getters

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