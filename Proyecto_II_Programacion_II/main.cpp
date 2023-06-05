#include "Componente.h"
#include "Fuente.h"
#include "Procesador.h"
#include "Parlante.h"

int main() {
	
	Componente* fuente = new Fuente("Fuente de audio", "Unidad CD", "DF531", "Unidad basica", 100);
	Componente* procesador = new Procesador("Procesador de señal", "Amplificador", "CA188", "80W", 90);
	Componente* parlante = new Parlante("Parlante", "Parlante", "MK537", "200W", 235);

	cout << fuente->toString();	
	cout << procesador->toString();
	cout << parlante->toString();

	return 0;
}