#include "Parlante.h"

Parlante::Parlante() : Componente()
{
}

Parlante::Parlante(string cat, string com, string mod, string car, double pre) : Componente(cat, com, mod, car, pre) {

}

Parlante::~Parlante() {

}

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