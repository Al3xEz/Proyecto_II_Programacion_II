#pragma once
#include "Tienda.h"

class Interfaz {
	public:
		static int menu();
		static void ventaDirecta();
		static void ventaEnLinea();
		static void mantenimiento();
		static void salir();
		static void errorOpcion();
};