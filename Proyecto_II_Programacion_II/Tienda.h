#include "Catalogo.h"

#include "Cliente.h"
#include "Empresa.h"
#include "Persona.h"

#pragma once
class Tienda
{

private:
	vector<Cliente> clientes;
	Catalogo catalogo;

public:
	
	Tienda();
	Tienda(vector<Cliente>, Catalogo);

};

