#include "Sistema.h"

#include <vector>

#pragma once
class Catalogo
{
private:
	vector<Sistema> sistemas;
	vector<Componente> componentes;

public:
	Catalogo();
	~Catalogo();
};
