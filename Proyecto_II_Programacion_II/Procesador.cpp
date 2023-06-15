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

#include "Procesador.h"

Procesador::Procesador() : Componente()
{
}

Procesador::Procesador(string cat, string com, string mod, string car, double pre) : Componente(cat, com, mod, car, pre) {

}

Procesador::~Procesador() {

}

string Procesador::toString() {
	stringstream s;
	s << "--------------------PROCESADOR--------------------" << endl << endl;
	s << "-Categoria: " << categoria << endl;
	s << "-Componente: " << componente << endl;
	s << "-Modelo: " << modelo << endl;
	s << "-Caracteristica: " << caracteristica << endl;
	s << "-Precio Base: " << precioBase << endl << endl;
	s << "--------------------------------------------------" << endl << endl;
	return s.str();
}