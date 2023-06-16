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

#include "Parlante.h"

//----------Contructores y destructor----------//

Parlante::Parlante() : Componente()
{
}

Parlante::Parlante(string cat, string com, string mod, string car, double pre) : Componente(cat, com, mod, car, pre) {

}

Parlante::~Parlante() {

}

//toString
string Parlante::toString() {
	stringstream s;
	s << "---------------------PARLANTE---------------------" << endl << endl;
	s << "-Categoria: " << categoria << endl;
	s << "-Componente: " << componente << endl;
	s << "-Modelo: " << modelo << endl;
	s << "-Caracteristica: " << caracteristica << endl;
	s << "-Precio Base: " << precioBase << endl << endl;
	s << "--------------------------------------------------" << endl << endl;
	return s.str();
}