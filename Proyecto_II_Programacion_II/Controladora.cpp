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

#include "Controladora.h"

void Controladora::control0() {
	int op = 0;
	do {
		op = control1();
		control7(op);
	} while (op != 4);
}

int Controladora::control1() {
	return Interfaz::menu();
}

void Controladora::control2() {
	Interfaz::ventaDirecta();
}

void Controladora::control3() {
	Interfaz::ventaEnLinea();
}

void Controladora::control4() {
	Interfaz::mantenimiento();
}

void Controladora::control5() {
	Interfaz::salir();
}

void Controladora::control6() {
	Interfaz::errorOpcion();
}

void Controladora::control7(int op) {
	switch (op) {
		case 1:control2(); break;
		case 2:control3(); break;
		case 3:control4(); break;
		case 4:control5(); break;
		default:control6();
	}
}
