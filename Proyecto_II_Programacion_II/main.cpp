#include "Tienda.h"

int main() {

	Componente* fuente = new Fuente("Fuente de audio", "Unidad CD", "DF531", "Unidad basica", 100);
	Componente* procesador = new Procesador("Procesador de señal", "Amplificador", "CA188", "80W", 90);
	Componente* parlante = new Parlante("Parlante", "Parlante", "MK537", "200W", 235);

	Cliente* empresa = new Empresa("Costa Rica", "San Jose", "Microsoft", "12345678");
	Cliente* persona = new Persona("Costa Rica", "Cartago", "305310834", "alexis12115@gmail.com", "Costarricense");

	cout << fuente->toString() << endl;
	cout << procesador->toString() << endl;
	cout << parlante->toString() << endl;
	cout << "Cliente Empresa: " << endl;
	cout << empresa->toString() << endl;
	cout << "Cliente Persona: " << endl;
	cout << persona->toString() << endl;

	return 0;
}