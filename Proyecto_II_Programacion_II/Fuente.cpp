#include "Fuente.h"

Fuente::Fuente() : Componente()
{
}

Fuente::Fuente(string cat, string com, string mod, string car, double pre) : Componente(cat,com,mod,car,pre) {

}

Fuente::~Fuente() {

}

string Fuente::toString() {
	stringstream s;
	s << "--------------------FUENTE--------------------" << endl << endl;
	s << "-Categoria: " << categoria << endl;
	s << "-Componente: " << componente << endl;
	s << "-Modelo: " << modelo << endl;
	s << "-Caracteristica: " << caracteristica << endl;
	s << "-Precio Base: " << precioBase << endl << endl;
	s << "----------------------------------------------" << endl << endl;
	return s.str();
}