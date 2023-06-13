#include "Tienda.h"

int main() {
	Tienda* tienda = new Tienda();
	int op, op2, op3, op4, opc = 0;
	int op5, op6, op9 = 0;
	int op7, op8, op10 = 0;
	double preB = 0.0;
	string fue, pro, par, ced, corE, nac, nomC, nomE, cedJ, paisU, ciudadU, mod;
	string cat, com, mode, car, cod, error;
	Componente* fuente = nullptr;
	Componente* procesador = nullptr;
	Componente* parlante = nullptr;
	Sistema* sistema = nullptr;
	Cliente* persona = nullptr;
	Cliente* empresa = nullptr;
	bool valido = false;

	do {
		cout << endl;
		cout << "-----BIENVENIDO AL SISTEMA DE LA TIENDA-----" << endl << endl;
		cout << "--------------------MENU--------------------" << endl << endl;
		cout << "[1] Venta Directa" << endl << endl;
		cout << "[2] Venta En Linea" << endl << endl;
		cout << "[3] Mantenimiento" << endl << endl;
		cout << "[4] Salir" << endl << endl;
		cout << "--------------------------------------------" << endl << endl;
		cout << "Ingrese la opcion que desea realizar: ";
		cin >> op;

		switch (op) {
		case 1: {
			system("cls");
			do {
				cout << endl;
				cout << "--------------------VENTA DIRECTA--------------------" << endl << endl;
				cout << "[1] Comprar un sistema preconfigurado" << endl << endl;
				cout << "[2] Configurar un sistema a su gusto" << endl << endl;
				cout << "[3] Comprar componentes individuales" << endl << endl;
				cout << "[4] Salir" << endl << endl;
				cout << "-----------------------------------------------------" << endl << endl;
				cout << "Ingrese la opcion que desea realizar: ";
				cin >> op2;

				switch (op2) {
				case 1: {
					system("cls");
					opc = 1;
					while (opc != 2) {
						cout << endl;
						//Mostrar sistemas preconfigurados del catalaogo
						cout << tienda->mostrarSistemas();
						cout << endl;
						valido = false;
						while (valido == false) {
							cout << "-Ingrese el codigo del sistema que desea comprar: ";
							cin >> cod;
							cout << endl;
							if (tienda->existeSistema(cod) == true) {
								valido = true;
							}
							else {
								cout << "*El codigo ingresado no corresponde a ningun sistema*" << endl << endl;
								valido = false;
							}
						}
						system("pause");
						system("cls");
						cout << endl;
						//Obtener sistema y metodo de compra
						cout << "-Sistema a comprar: " << endl << endl;
						cout << tienda->sistemaToString(cod);
						cout << "-Precio total: " << tienda->comprarSistemaPreconfig(cod) << " dolares" << endl;
						cout << endl;
						cout << "Desea proceder con la compra? ( 1 = SI | 2 = NO ): ";
						cin >> opc;
						cout << endl;
						if (opc == 1) {
							cout << "¡La compra se realizo con exito!" << endl;
						}
						cout << endl;
						system("cls");
					}
					system("cls");
					break;
				}
				case 2: {
					system("cls");
					opc = 1;
					while (opc != 2) {
						cout << endl;
						//Mostrar fuentes
						cout << tienda->mostrarFuentes();
						cout << endl;
						valido = false;
						while (valido == false) {
							cout << "-Ingrese el modelo de la fuente que desea: ";
							cin >> fue;
							cout << endl;
							if (tienda->existeComponente(fue) == true) {
								valido = true;
							}
							else {
								cout << "*El modelo ingresado no corresponde a ningun componente*" << endl << endl;
								valido = false;
							}
						}
						//Metodo para obtener fuente
						fuente = tienda->getComponente(fue);
						cout << endl;
						system("pause");
						system("cls");
						cout << endl;
						//Mostrar procesadores 
						cout << tienda->mostrarProcesadores();
						cout << endl;
						valido = false;
						while (valido == false) {
							cout << "-Ingrese el modelo del procesador que desea: ";
							cin >> pro;
							cout << endl;
							if (tienda->existeComponente(pro) == true) {
								valido = true;
							}
							else {
								cout << "*El modelo ingresado no corresponde a ningun componente*" << endl << endl;
								valido = false;
							}
						}
						//Metodo para obtener procesador
						procesador = tienda->getComponente(pro);
						cout << endl;
						system("pause");
						system("cls");
						cout << endl;
						//Mostrar parlantes
						cout << tienda->mostrarParlantes();
						cout << endl;
						valido = false;
						while (valido == false) {
							cout << "-Ingrese el modelo del parlante que desea: ";
							cin >> par;
							cout << endl;
							if (tienda->existeComponente(par) == true) {
								valido = true;
							}
							else {
								cout << "*El modelo ingresado no corresponde a ningun componente*" << endl << endl;
								valido = false;
							}
						}
						//Metodo para obtener parlante
						parlante = tienda->getComponente(par);
						cout << endl;
						system("pause");
						system("cls");
						cout << endl;
						//Mostrar el sistema creado
						sistema = new Sistema(fuente, procesador, parlante);
						cout << "-Sistema creado: " << endl << endl;
						cout << sistema->toString2();
						//Metodo de compra
						cout << "-Precio total: " << sistema->getPrecio() << " dolares" << endl;
						cout << endl;
						cout << "Desea proceder con la compra? ( 1 = SI | 2 = NO ): ";
						cin >> opc;
						cout << endl;
						if (opc == 1) {
							cout << "¡La compra se realizo con exito!" << endl;
						}
						cout << endl;
						system("cls");
					}
					system("cls");
					break;
				}
				case 3: {
					system("cls");
					cout << endl;
					do {
						cout << "-----COMPRA COMPONENTES INDIVIDUALES-----" << endl << endl;
						cout << "[1] Comprar fuente" << endl << endl;
						cout << "[2] Comprar procesador" << endl << endl;
						cout << "[3] Comprar parlante" << endl << endl;
						cout << "[4] Salir" << endl << endl;
						cout << "-----------------------------------------" << endl << endl;
						cout << "Ingrese la opcion que desea realizar: ";
						cin >> op3;

						switch (op3) {
							case 1: {
								system("cls");
								opc = 1;
								while (opc != 2) {
									cout << endl;
									//Mostrar fuentes 
									cout << tienda->mostrarFuentes();
									cout << endl;
									valido = false;
									while (valido == false) {
										cout << "-Ingrese el modelo de la fuente que desea: ";
										cin >> fue;
										cout << endl;
										if (tienda->existeComponente(fue) == true) {
											valido = true;
										}
										else {
											cout << "*El modelo ingresado no corresponde a ningun componente*" << endl << endl;
											valido = false;
										}
									}
									cout << endl;
									system("pause");
									system("cls");
									cout << endl;
									cout << tienda->componenteToString(fue);
									//Metodo de compra
									cout << "-Precio total: " << tienda->totalComponente(fue) << " dolares" << endl;
									cout << endl;
									cout << "Desea proceder con la compra? ( 1 = SI | 2 = NO ): ";
									cin >> opc;
									cout << endl;
									if (opc == 1) {
										cout << "¡La compra se realizo con exito!" << endl;
									}
									cout << endl;
									system("cls");
								}
								system("cls");
								break;
							}
							case 2: {
								system("cls");
								opc = 1;
								while (opc != 2) {
									cout << endl;
									//Mostrar procesadores
									cout << tienda->mostrarProcesadores();
									cout << endl;
									valido = false;
									while (valido == false) {
										cout << "-Ingrese el modelo del procesador que desea: ";
										cin >> pro;
										cout << endl;
										if (tienda->existeComponente(pro) == true) {
											valido = true;
										}
										else {
											cout << "*El modelo ingresado no corresponde a ningun componente*" << endl << endl;
											valido = false;
										}
									}
									cout << endl;
									system("pause");
									system("cls");
									cout << endl;
									cout << tienda->componenteToString(pro);
									//Metodo de compra
									cout << "-Precio total: " << tienda->totalComponente(pro) << " dolares" << endl;
									cout << endl;
									cout << "Desea proceder con la compra? ( 1 = SI | 2 = NO ): ";
									cin >> opc;
									cout << endl;
									if (opc == 1) {
										cout << "¡La compra se realizo con exito!" << endl;
									}
									cout << endl;
									system("cls");
								}
								system("cls");
								break;
							}
							case 3: {
								system("cls");
								opc = 1;
								while (opc != 2) {
									cout << endl;
									//Mostrar parlantes
									cout << tienda->mostrarParlantes();
									cout << endl;
									valido = false;
									while (valido == false) {
										cout << "-Ingrese el modelo del parlante que desea: ";
										cin >> par;
										cout << endl;
										if (tienda->existeComponente(par) == true) {
											valido = true;
										}
										else {
											cout << "*El modelo ingresado no corresponde a ningun componente*" << endl << endl;
											valido = false;
										}
									}
									cout << endl;
									system("pause");
									system("cls");
									cout << endl;
									cout << tienda->componenteToString(par);
									//Metodo de compra
									cout << "-Precio total: " << tienda->totalComponente(par) << " dolares" << endl;
									cout << endl;
									cout << "Desea proceder con la compra? ( 1 = SI | 2 = NO ): ";
									cin >> opc;
									cout << endl;
									if (opc == 1) {
										cout << "¡La compra se realizo con exito!" << endl;
									}
									cout << endl;
									system("cls");
								}
								system("cls");
								break;
							}
							case 4: {
								op3 = 0;
								break;
							}
						}
					} while (op3 != 0);
					system("cls");
					break;
				}
				case 4: {
					op2 = 0;
					break;
				}
				default: {
					cout << endl;
					cout << "Opcion invalida" << endl << endl;
					system("pause");
					system("cls");
				}
				}
			} while (op2 != 0);
			system("cls");
			break;
		}
		case 2: {
			system("cls");
			do {
				cout << endl;
				cout << "----------SUSCRIPCION----------" << endl << endl;
				cout << "[1] Suscribir cliente fisico" << endl << endl;
				cout << "[2] Suscribir empresa" << endl << endl;
				cout << "[3] Salir" << endl << endl;
				cout << "-------------------------------" << endl << endl;
				cout << "Ingrese la opcion que desea realizar: ";
				cin >> op4;

				switch (op4) {
					case 1: {
						system("cls");
						cout << endl;
						valido = false;
						while (valido == false) {
							try {
								cout << "-Ingrese la cedula: ";
								cin >> ced;
								cout << endl;

								for (int i = 0; i < ced.size(); i++) {
									if (!isdigit(ced.at(i))) {
										throw error = "*El numero de cedula solo puede tener numeros*";
										cout << endl;
									}
								}
								if (ced.size() != 9) {
									throw error = "*El numero de digitos de la cedula debe ser igual a 9*";
									cout << endl;
								}
								else {
									valido = true;
								}
							}
							catch (string error) {
								cout << error << endl << endl;
							}
						}
						cout << endl;
						valido = false;
						while (valido == false) {
							try {
								std::getline(std::cin, nomC);
								cout << "-Ingrese el nombre completo: ";
								getline(cin, nomC);
								cout << endl;

								for (int i = 0; i < nomC.size(); i++) {
									if (isdigit(nomC.at(i))) {
										throw error = "*El nombre solo puede tener letras*";
										cout << endl;
									}
								}
								valido = true;
							}
							catch (string error) {
								cout << error << endl << endl;
							}
						}
						cout << endl;
						valido = false;
						while (valido == false) {
							try {
								cout << "-Ingrese el correo electronico: ";
								cin >> corE;
								cout << endl;

								for (int i = 0; i < corE.size(); i++) {
									if (corE.find('@') == string::npos) {
										throw error = "*El correo electronico debe tener arroba (@)*";
										cout << endl;
									}
								}
								valido = true;
							}
							catch (string error) {
								cout << error << endl << endl;
							}
						}
						cout << endl;
						valido = false;
						while (valido == false) {
							try {
								cout << "-Ingrese la nacionalidad: ";
								cin >> nac;
								cout << endl;

								for (int i = 0; i < nac.size(); i++) {
									if (isdigit(nac.at(i))) {
										throw error = "*La nacionalidad solo puede tener letras*";
										cout << endl;
									}
								}
								valido = true;
							}
							catch (string error) {
								cout << error << endl << endl;
							}
						}
						cout << endl;
						cout << "--------------------PAIS Y CIUDAD DE UBICACION--------------------" << endl << endl;
						cout << "[1] Argentina, Buenos Aires" << endl << endl;
						cout << "[2] Brasil, Brasilia" << endl << endl;
						cout << "[3] Canada, Ontario" << endl << endl;
						cout << "[4] EEUU, California" << endl << endl;
						cout << "[5] EEUU, New York" << endl << endl;
						cout << "[6] Francia, Paris" << endl << endl;
						cout << "[7] Inglaterra, Londres" << endl << endl;
						cout << "[8] Italia, Milan" << endl << endl;
						cout << "[9] Costa Rica, GAM (San Jose, Heredia, Cartago, Alajuela)" << endl << endl;
						cout << "[10] Costa Rica, fuera de la GAM (Guanacaste, Puntarenas, Limon)" << endl << endl;
						cout << "*No se realizan envios a lugares que no se encuentren dentro de las opciones presentadas*" << endl << endl;
						cout << "------------------------------------------------------------------" << endl << endl;
						cout << "Seleccione pais y ciudad de ubicacion: ";
						cin >> op9;
						switch (op9) {
							case 1: {
								system("cls");
								opc = 1;
								paisU = "Argentina";
								ciudadU = "Buenos Aires";
								persona = new Persona(ced, nomC, paisU, ciudadU, corE, nac);
								tienda->agregarCliente(persona);
								while (opc != 2) {
									cout << endl;
									//Mostrar sistemas preconfigurados del catalaogo
									cout << tienda->mostrarSistemas();
									cout << endl;
									valido = false;
									while (valido == false) {
										cout << "-Ingrese el codigo del sistema que desea comprar: ";
										cin >> cod;
										cout << endl;
										if (tienda->existeSistema(cod) == true) {
											valido = true;
										}
										else {
											cout << "*El codigo ingresado no corresponde a ningun sistema*" << endl << endl;
											valido = false;
										}
									}
									system("pause");
									system("cls");
									cout << endl;
									//Obtener sistema y metodo de compra
									cout << "-Sistema a comprar: " << endl << endl;
									cout << tienda->sistemaToString(cod);
									cout << "-Precio total: " << (tienda->comprarSistemaPreconfig(cod)) + 175 << " dolares" << endl;
									cout << endl;
									cout << "Desea proceder con la compra? ( 1 = SI | 2 = NO ): ";
									cin >> opc;
									cout << endl;
									if (opc == 1) {
										cout << "¡La compra se realizo con exito!" << endl;
									}
									cout << endl;
									system("cls");
								}
								system("cls");
								break;
							}
							case 2: {
								system("cls");
								opc = 1;
								paisU = "Brasil";
								ciudadU = "Brasilia";
								persona = new Persona(ced, nomC, paisU, ciudadU, corE, nac);
								tienda->agregarCliente(persona);
								while (opc != 2) {
									cout << endl;
									//Mostrar sistemas preconfigurados del catalaogo
									cout << tienda->mostrarSistemas();
									cout << endl;
									valido = false;
									while (valido == false) {
										cout << "-Ingrese el codigo del sistema que desea comprar: ";
										cin >> cod;
										cout << endl;
										if (tienda->existeSistema(cod) == true) {
											valido = true;
										}
										else {
											cout << "*El codigo ingresado no corresponde a ningun sistema*" << endl << endl;
											valido = false;
										}
									}
									system("pause");
									system("cls");
									cout << endl;
									//Obtener sistema y metodo de compra
									cout << "-Sistema a comprar: " << endl << endl;
									cout << tienda->sistemaToString(cod);
									cout << "-Precio total: " << (tienda->comprarSistemaPreconfig(cod)) + 150 << " dolares" << endl;
									cout << endl;
									cout << "Desea proceder con la compra? ( 1 = SI | 2 = NO ): ";
									cin >> opc;
									cout << endl;
									if (opc == 1) {
										cout << "¡La compra se realizo con exito!" << endl;
									}
									cout << endl;
									system("cls");
								}
								system("cls");
								break;
								system("cls");
								break;
							}
							case 3: {
								system("cls");
								opc = 1;
								paisU = "Canada";
								ciudadU = "Ontario";
								persona = new Persona(ced, nomC, paisU, ciudadU, corE, nac);
								tienda->agregarCliente(persona);
								while (opc != 2) {
									cout << endl;
									//Mostrar sistemas preconfigurados del catalaogo
									cout << tienda->mostrarSistemas();
									cout << endl;
									valido = false;
									while (valido == false) {
										cout << "-Ingrese el codigo del sistema que desea comprar: ";
										cin >> cod;
										cout << endl;
										if (tienda->existeSistema(cod) == true) {
											valido = true;
										}
										else {
											cout << "*El codigo ingresado no corresponde a ningun sistema*" << endl << endl;
											valido = false;
										}
									}
									system("pause");
									system("cls");
									cout << endl;
									//Obtener sistema y metodo de compra
									cout << "-Sistema a comprar: " << endl << endl;
									cout << tienda->sistemaToString(cod);
									cout << "-Precio total: " << (tienda->comprarSistemaPreconfig(cod)) + 160 << " dolares" << endl;
									cout << endl;
									cout << "Desea proceder con la compra? ( 1 = SI | 2 = NO ): ";
									cin >> opc;
									cout << endl;
									if (opc == 1) {
										cout << "¡La compra se realizo con exito!" << endl;
									}
									cout << endl;
									system("cls");
								}
								system("cls");
								break;
								system("cls");
								break;
							}
							case 4: {
								system("cls");
								opc = 1;
								paisU = "EEUU";
								ciudadU = "California";
								persona = new Persona(ced, nomC, paisU, ciudadU, corE, nac);
								tienda->agregarCliente(persona);
								while (opc != 2) {
									cout << endl;
									//Mostrar sistemas preconfigurados del catalaogo
									cout << tienda->mostrarSistemas();
									cout << endl;
									valido = false;
									while (valido == false) {
										cout << "-Ingrese el codigo del sistema que desea comprar: ";
										cin >> cod;
										cout << endl;
										if (tienda->existeSistema(cod) == true) {
											valido = true;
										}
										else {
											cout << "*El codigo ingresado no corresponde a ningun sistema*" << endl << endl;
											valido = false;
										}
									}
									system("pause");
									system("cls");
									cout << endl;
									//Obtener sistema y metodo de compra
									cout << "-Sistema a comprar: " << endl << endl;
									cout << tienda->sistemaToString(cod);
									cout << "-Precio total: " << (tienda->comprarSistemaPreconfig(cod)) + 150 << " dolares" << endl;
									cout << endl;
									cout << "Desea proceder con la compra? ( 1 = SI | 2 = NO ): ";
									cin >> opc;
									cout << endl;
									if (opc == 1) {
										cout << "¡La compra se realizo con exito!" << endl;
									}
									cout << endl;
									system("cls");
								}
								system("cls");
								break;
							}
							case 5: {
								system("cls");
								opc = 1;
								paisU = "EEUU";
								ciudadU = "New York";
								persona = new Persona(ced, nomC, paisU, ciudadU, corE, nac);
								tienda->agregarCliente(persona);
								while (opc != 2) {
									cout << endl;
									//Mostrar sistemas preconfigurados del catalaogo
									cout << tienda->mostrarSistemas();
									cout << endl;
									valido = false;
									while (valido == false) {
										cout << "-Ingrese el codigo del sistema que desea comprar: ";
										cin >> cod;
										cout << endl;
										if (tienda->existeSistema(cod) == true) {
											valido = true;
										}
										else {
											cout << "*El codigo ingresado no corresponde a ningun sistema*" << endl << endl;
											valido = false;
										}
									}
									system("pause");
									system("cls");
									cout << endl;
									//Obtener sistema y metodo de compra
									cout << "-Sistema a comprar: " << endl << endl;
									cout << tienda->sistemaToString(cod);
									cout << "-Precio total: " << (tienda->comprarSistemaPreconfig(cod)) + 100 << " dolares" << endl;
									cout << endl;
									cout << "Desea proceder con la compra? ( 1 = SI | 2 = NO ): ";
									cin >> opc;
									cout << endl;
									if (opc == 1) {
										cout << "¡La compra se realizo con exito!" << endl;
									}
									cout << endl;
									system("cls");
								}
								system("cls");
								break;
							}
							case 6: {
								system("cls");
								opc = 1;
								paisU = "Francia";
								ciudadU = "Paris";
								persona = new Persona(ced, nomC, paisU, ciudadU, corE, nac);
								tienda->agregarCliente(persona);
								while (opc != 2) {
									cout << endl;
									//Mostrar sistemas preconfigurados del catalaogo
									cout << tienda->mostrarSistemas();
									cout << endl;
									valido = false;
									while (valido == false) {
										cout << "-Ingrese el codigo del sistema que desea comprar: ";
										cin >> cod;
										cout << endl;
										if (tienda->existeSistema(cod) == true) {
											valido = true;
										}
										else {
											cout << "*El codigo ingresado no corresponde a ningun sistema*" << endl << endl;
											valido = false;
										}
									}
									system("pause");
									system("cls");
									cout << endl;
									//Obtener sistema y metodo de compra
									cout << "-Sistema a comprar: " << endl << endl;
									cout << tienda->sistemaToString(cod);
									cout << "-Precio total: " << (tienda->comprarSistemaPreconfig(cod)) + 200 << " dolares" << endl;
									cout << endl;
									cout << "Desea proceder con la compra? ( 1 = SI | 2 = NO ): ";
									cin >> opc;
									cout << endl;
									if (opc == 1) {
										cout << "¡La compra se realizo con exito!" << endl;
									}
									cout << endl;
									system("cls");
								}
								system("cls");
								break;
							}
							case 7: {
								system("cls");
								opc = 1;
								paisU = "Inglaterra";
								ciudadU = "Londres";
								persona = new Persona(ced, nomC, paisU, ciudadU, corE, nac);
								tienda->agregarCliente(persona);
								while (opc != 2) {
									cout << endl;
									//Mostrar sistemas preconfigurados del catalaogo
									cout << tienda->mostrarSistemas();
									cout << endl;
									valido = false;
									while (valido == false) {
										cout << "-Ingrese el codigo del sistema que desea comprar: ";
										cin >> cod;
										cout << endl;
										if (tienda->existeSistema(cod) == true) {
											valido = true;
										}
										else {
											cout << "*El codigo ingresado no corresponde a ningun sistema*" << endl << endl;
											valido = false;
										}
									}
									system("pause");
									system("cls");
									cout << endl;
									//Obtener sistema y metodo de compra
									cout << "-Sistema a comprar: " << endl << endl;
									cout << tienda->sistemaToString(cod);
									cout << "-Precio total: " << (tienda->comprarSistemaPreconfig(cod)) + 200 << " dolares" << endl;
									cout << endl;
									cout << "Desea proceder con la compra? ( 1 = SI | 2 = NO ): ";
									cin >> opc;
									cout << endl;
									if (opc == 1) {
										cout << "¡La compra se realizo con exito!" << endl;
									}
									cout << endl;
									system("cls");
								}
								system("cls");
								break;
							}
							case 8: {
								system("cls");
								opc = 1;
								paisU = "Italia";
								ciudadU = "Milan";
								persona = new Persona(ced, nomC, paisU, ciudadU, corE, nac);
								tienda->agregarCliente(persona);
								while (opc != 2) {
									cout << endl;
									//Mostrar sistemas preconfigurados del catalaogo
									cout << tienda->mostrarSistemas();
									cout << endl;
									valido = false;
									while (valido == false) {
										cout << "-Ingrese el codigo del sistema que desea comprar: ";
										cin >> cod;
										cout << endl;
										if (tienda->existeSistema(cod) == true) {
											valido = true;
										}
										else {
											cout << "*El codigo ingresado no corresponde a ningun sistema*" << endl << endl;
											valido = false;
										}
									}
									system("pause");
									system("cls");
									cout << endl;
									//Obtener sistema y metodo de compra
									cout << "-Sistema a comprar: " << endl << endl;
									cout << tienda->sistemaToString(cod);
									cout << "-Precio total: " << (tienda->comprarSistemaPreconfig(cod)) + 250 << " dolares" << endl;
									cout << endl;
									cout << "Desea proceder con la compra? ( 1 = SI | 2 = NO ): ";
									cin >> opc;
									cout << endl;
									if (opc == 1) {
										cout << "¡La compra se realizo con exito!" << endl;
									}
									cout << endl;
									system("cls");
								}
								system("cls");
								break;
							}
							case 9: {
								system("cls");
								opc = 1;
								paisU = "Costa Rica";
								ciudadU = "GAM";
								persona = new Persona(ced, nomC, paisU, ciudadU, corE, nac);
								tienda->agregarCliente(persona);
								while (opc != 2) {
									cout << endl;
									//Mostrar sistemas preconfigurados del catalaogo
									cout << tienda->mostrarSistemas();
									cout << endl;
									valido = false;
									while (valido == false) {
										cout << "-Ingrese el codigo del sistema que desea comprar: ";
										cin >> cod;
										cout << endl;
										if (tienda->existeSistema(cod) == true) {
											valido = true;
										}
										else {
											cout << "*El codigo ingresado no corresponde a ningun sistema*" << endl << endl;
											valido = false;
										}
									}
									system("pause");
									system("cls");
									cout << endl;
									//Obtener sistema y metodo de compra
									cout << "-Sistema a comprar: " << endl << endl;
									cout << tienda->sistemaToString(cod);
									cout << "-Precio total: " << (tienda->comprarSistemaPreconfig(cod)) + 50 << " dolares" << endl;
									cout << endl;
									cout << "Desea proceder con la compra? ( 1 = SI | 2 = NO ): ";
									cin >> opc;
									cout << endl;
									if (opc == 1) {
										cout << "¡La compra se realizo con exito!" << endl;
									}
									cout << endl;
									system("cls");
								}
								system("cls");
								break;
							}
							case 10: {
								system("cls");
								opc = 1;
								paisU = "Costa Rica";
								ciudadU = "Fuera de la GAM";
								persona = new Persona(ced, nomC, paisU, ciudadU, corE, nac);
								tienda->agregarCliente(persona);
								while (opc != 2) {
									cout << endl;
									//Mostrar sistemas preconfigurados del catalaogo
									cout << tienda->mostrarSistemas();
									cout << endl;
									valido = false;
									while (valido == false) {
										cout << "-Ingrese el codigo del sistema que desea comprar: ";
										cin >> cod;
										cout << endl;
										if (tienda->existeSistema(cod) == true) {
											valido = true;
										}
										else {
											cout << "*El codigo ingresado no corresponde a ningun sistema*" << endl << endl;
											valido = false;
										}
									}
									system("pause");
									system("cls");
									cout << endl;
									//Obtener sistema y metodo de compra
									cout << "-Sistema a comprar: " << endl << endl;
									cout << tienda->sistemaToString(cod);
									cout << "-Precio total: " << (tienda->comprarSistemaPreconfig(cod)) + 80 << " dolares" << endl;
									cout << endl;
									cout << "Desea proceder con la compra? ( 1 = SI | 2 = NO ): ";
									cin >> opc;
									cout << endl;
									if (opc == 1) {
										cout << "¡La compra se realizo con exito!" << endl;
									}
									cout << endl;
									system("cls");
								}
								system("cls");
								break;
							}
							default: {
								cout << endl;
								cout << "Opcion invalida" << endl << endl;
								system("pause");
								system("cls");
							}
						}
						system("cls");
						break;
					}
					case 2: {
						system("cls");
						cout << endl;
						valido = false;
						while (valido == false) {
							try {
								std::getline(std::cin, nomE);
								cout << "-Ingrese el nombre de la empresa: ";
								getline(cin, nomE);
								cout << endl;

								for (int i = 0; i < nomE.size(); i++) {
									if (isdigit(nomE.at(i))) {
										throw error = "*El nombre de la empresa solo puede tener letras.";
										cout << endl;
									}
								}
								valido = true;
							}
							catch (string error) {
								cout << error << endl << endl;
							}
						}
						cout << endl;
						valido = false;
						while (valido == false) {
							try {
								cout << "-Ingrese la cedula juridica: ";
								cin >> cedJ;
								cout << endl;

								for (int i = 0; i < cedJ.size(); i++) {
									if (!isdigit(cedJ.at(i))) {
										throw error = "*El numero de cedula juridica solo puede tener numeros.";
										cout << endl;
									}
								}
								if (ced.size() != 10) {
									throw error = "*El numero de digitos de la cedula juridica debe ser igual a 10.";
									cout << endl;
								}
								else {
									valido = true;
								}
							}
							catch (string error) {
								cout << error << endl << endl;
							}
						}
						cout << endl;
						cout << "--------------------PAIS Y CIUDAD DE UBICACION--------------------" << endl << endl;
						cout << "[1] Argentina, Buenos Aires" << endl << endl;
						cout << "[2] Brasil, Brasilia" << endl << endl;
						cout << "[3] Canada, Ontario" << endl << endl;
						cout << "[4] EEUU, California" << endl << endl;
						cout << "[5] EEUU, New York" << endl << endl;
						cout << "[6] Francia, Paris" << endl << endl;
						cout << "[7] Inglaterra, Londres" << endl << endl;
						cout << "[8] Italia, Milan" << endl << endl;
						cout << "[9] Costa Rica, GAM (San Jose, Heredia, Cartago, Alajuela)" << endl << endl;
						cout << "[10] Costa Rica, fuera de la GAM (Guanacaste, Puntarenas, Limon)" << endl << endl;
						cout << "*No se realizan envios a lugares que no se encuentren dentro de las opciones presentadas*" << endl << endl;
						cout << "------------------------------------------------------------------" << endl << endl;
						cout << "Seleccione pais y ciudad de ubicacion: ";
						cin >> op10;
						switch (op10) {
							case 1: {
								system("cls");
								opc = 1;
								paisU = "Argentina";
								ciudadU = "Buenos Aires";
								empresa = new Empresa(cedJ, paisU, ciudadU, nomE);
								tienda->agregarCliente(empresa);
								while (opc != 2) {
									cout << endl;
									//Mostrar sistemas preconfigurados del catalaogo
									cout << tienda->mostrarSistemas();
									cout << endl;
									valido = false;
									while (valido == false) {
										cout << "-Ingrese el codigo del sistema que desea comprar: ";
										cin >> cod;
										cout << endl;
										if (tienda->existeSistema(cod) == true) {
											valido = true;
										}
										else {
											cout << "*El codigo ingresado no corresponde a ningun sistema*" << endl << endl;
											valido = false;
										}
									}
									system("pause");
									system("cls");
									cout << endl;
									//Obtener sistema y metodo de compra
									cout << "-Sistema a comprar: " << endl << endl;
									cout << tienda->sistemaToString(cod);
									cout << "-Precio total: " << (tienda->comprarSistemaPreconfig(cod)) + 175 << " dolares" << endl;
									cout << endl;
									cout << "Desea proceder con la compra? ( 1 = SI | 2 = NO ): ";
									cin >> opc;
									cout << endl;
									if (opc == 1) {
										cout << "¡La compra se realizo con exito!" << endl;
									}
									cout << endl;
									system("cls");
								}
								system("cls");
								break;
							}
							case 2: {
								system("cls");
								opc = 1;
								paisU = "Brasil";
								ciudadU = "Brasilia";
								empresa = new Empresa(cedJ, paisU, ciudadU, nomE);
								tienda->agregarCliente(empresa);
								while (opc != 2) {
									cout << endl;
									//Mostrar sistemas preconfigurados del catalaogo
									cout << tienda->mostrarSistemas();
									cout << endl;
									valido = false;
									while (valido == false) {
										cout << "-Ingrese el codigo del sistema que desea comprar: ";
										cin >> cod;
										cout << endl;
										if (tienda->existeSistema(cod) == true) {
											valido = true;
										}
										else {
											cout << "*El codigo ingresado no corresponde a ningun sistema*" << endl << endl;
											valido = false;
										}
									}
									system("pause");
									system("cls");
									cout << endl;
									//Obtener sistema y metodo de compra
									cout << "-Sistema a comprar: " << endl << endl;
									cout << tienda->sistemaToString(cod);
									cout << "-Precio total: " << (tienda->comprarSistemaPreconfig(cod)) + 150 << " dolares" << endl;
									cout << endl;
									cout << "Desea proceder con la compra? ( 1 = SI | 2 = NO ): ";
									cin >> opc;
									cout << endl;
									if (opc == 1) {
										cout << "¡La compra se realizo con exito!" << endl;
									}
									cout << endl;
									system("cls");
								}
								system("cls");
								break;
								system("cls");
								break;
							}
							case 3: {
								system("cls");
								opc = 1;
								paisU = "Canada";
								ciudadU = "Ontario";
								empresa = new Empresa(cedJ, paisU, ciudadU, nomE);
								tienda->agregarCliente(empresa);
								while (opc != 2) {
									cout << endl;
									//Mostrar sistemas preconfigurados del catalaogo
									cout << tienda->mostrarSistemas();
									cout << endl;
									valido = false;
									while (valido == false) {
										cout << "-Ingrese el codigo del sistema que desea comprar: ";
										cin >> cod;
										cout << endl;
										if (tienda->existeSistema(cod) == true) {
											valido = true;
										}
										else {
											cout << "*El codigo ingresado no corresponde a ningun sistema*" << endl << endl;
											valido = false;
										}
									}
									system("pause");
									system("cls");
									cout << endl;
									//Obtener sistema y metodo de compra
									cout << "-Sistema a comprar: " << endl << endl;
									cout << tienda->sistemaToString(cod);
									cout << "-Precio total: " << (tienda->comprarSistemaPreconfig(cod)) + 160 << " dolares" << endl;
									cout << endl;
									cout << "Desea proceder con la compra? ( 1 = SI | 2 = NO ): ";
									cin >> opc;
									cout << endl;
									if (opc == 1) {
										cout << "¡La compra se realizo con exito!" << endl;
									}
									cout << endl;
									system("cls");
								}
								system("cls");
								break;
								system("cls");
								break;
							}
							case 4: {
								system("cls");
								opc = 1;
								paisU = "EEUU";
								ciudadU = "California";
								empresa = new Empresa(cedJ, paisU, ciudadU, nomE);
								tienda->agregarCliente(empresa);
								while (opc != 2) {
									cout << endl;
									//Mostrar sistemas preconfigurados del catalaogo
									cout << tienda->mostrarSistemas();
									cout << endl;
									valido = false;
									while (valido == false) {
										cout << "-Ingrese el codigo del sistema que desea comprar: ";
										cin >> cod;
										cout << endl;
										if (tienda->existeSistema(cod) == true) {
											valido = true;
										}
										else {
											cout << "*El codigo ingresado no corresponde a ningun sistema*" << endl << endl;
											valido = false;
										}
									}
									system("pause");
									system("cls");
									cout << endl;
									//Obtener sistema y metodo de compra
									cout << "-Sistema a comprar: " << endl << endl;
									cout << tienda->sistemaToString(cod);
									cout << "-Precio total: " << (tienda->comprarSistemaPreconfig(cod)) + 150 << " dolares" << endl;
									cout << endl;
									cout << "Desea proceder con la compra? ( 1 = SI | 2 = NO ): ";
									cin >> opc;
									cout << endl;
									if (opc == 1) {
										cout << "¡La compra se realizo con exito!" << endl;
									}
									cout << endl;
									system("cls");
								}
								system("cls");
								break;
							}
							case 5: {
								system("cls");
								opc = 1;
								paisU = "EEUU";
								ciudadU = "New York";
								empresa = new Empresa(cedJ, paisU, ciudadU, nomE);
								tienda->agregarCliente(empresa);
								while (opc != 2) {
									cout << endl;
									//Mostrar sistemas preconfigurados del catalaogo
									cout << tienda->mostrarSistemas();
									cout << endl;
									valido = false;
									while (valido == false) {
										cout << "-Ingrese el codigo del sistema que desea comprar: ";
										cin >> cod;
										cout << endl;
										if (tienda->existeSistema(cod) == true) {
											valido = true;
										}
										else {
											cout << "*El codigo ingresado no corresponde a ningun sistema*" << endl << endl;
											valido = false;
										}
									}
									system("pause");
									system("cls");
									cout << endl;
									//Obtener sistema y metodo de compra
									cout << "-Sistema a comprar: " << endl << endl;
									cout << tienda->sistemaToString(cod);
									cout << "-Precio total: " << (tienda->comprarSistemaPreconfig(cod)) + 100 << " dolares" << endl;
									cout << endl;
									cout << "Desea proceder con la compra? ( 1 = SI | 2 = NO ): ";
									cin >> opc;
									cout << endl;
									if (opc == 1) {
										cout << "¡La compra se realizo con exito!" << endl;
									}
									cout << endl;
									system("cls");
								}
								system("cls");
								break;
							}
							case 6: {
								system("cls");
								opc = 1;
								paisU = "Francia";
								ciudadU = "Paris";
								empresa = new Empresa(cedJ, paisU, ciudadU, nomE);
								tienda->agregarCliente(empresa);
								while (opc != 2) {
									cout << endl;
									//Mostrar sistemas preconfigurados del catalaogo
									cout << tienda->mostrarSistemas();
									cout << endl;
									valido = false;
									while (valido == false) {
										cout << "-Ingrese el codigo del sistema que desea comprar: ";
										cin >> cod;
										cout << endl;
										if (tienda->existeSistema(cod) == true) {
											valido = true;
										}
										else {
											cout << "*El codigo ingresado no corresponde a ningun sistema*" << endl << endl;
											valido = false;
										}
									}
									system("pause");
									system("cls");
									cout << endl;
									//Obtener sistema y metodo de compra
									cout << "-Sistema a comprar: " << endl << endl;
									cout << tienda->sistemaToString(cod);
									cout << "-Precio total: " << (tienda->comprarSistemaPreconfig(cod)) + 200 << " dolares" << endl;
									cout << endl;
									cout << "Desea proceder con la compra? ( 1 = SI | 2 = NO ): ";
									cin >> opc;
									cout << endl;
									if (opc == 1) {
										cout << "¡La compra se realizo con exito!" << endl;
									}
									cout << endl;
									system("cls");
								}
								system("cls");
								break;
							}
							case 7: {
								system("cls");
								opc = 1;
								paisU = "Inglaterra";
								ciudadU = "Londres";
								empresa = new Empresa(cedJ, paisU, ciudadU, nomE);
								tienda->agregarCliente(empresa);
								while (opc != 2) {
									cout << endl;
									//Mostrar sistemas preconfigurados del catalaogo
									cout << tienda->mostrarSistemas();
									cout << endl;
									valido = false;
									while (valido == false) {
										cout << "-Ingrese el codigo del sistema que desea comprar: ";
										cin >> cod;
										cout << endl;
										if (tienda->existeSistema(cod) == true) {
											valido = true;
										}
										else {
											cout << "*El codigo ingresado no corresponde a ningun sistema*" << endl << endl;
											valido = false;
										}
									}
									system("pause");
									system("cls");
									cout << endl;
									//Obtener sistema y metodo de compra
									cout << "-Sistema a comprar: " << endl << endl;
									cout << tienda->sistemaToString(cod);
									cout << "-Precio total: " << (tienda->comprarSistemaPreconfig(cod)) + 200 << " dolares" << endl;
									cout << endl;
									cout << "Desea proceder con la compra? ( 1 = SI | 2 = NO ): ";
									cin >> opc;
									cout << endl;
									if (opc == 1) {
										cout << "¡La compra se realizo con exito!" << endl;
									}
									cout << endl;
									system("cls");
								}
								system("cls");
								break;
							}
							case 8: {
								system("cls");
								opc = 1;
								paisU = "Italia";
								ciudadU = "Milan";
								empresa = new Empresa(cedJ, paisU, ciudadU, nomE);
								tienda->agregarCliente(empresa);
								while (opc != 2) {
									cout << endl;
									//Mostrar sistemas preconfigurados del catalaogo
									cout << tienda->mostrarSistemas();
									cout << endl;
									valido = false;
									while (valido == false) {
										cout << "-Ingrese el codigo del sistema que desea comprar: ";
										cin >> cod;
										cout << endl;
										if (tienda->existeSistema(cod) == true) {
											valido = true;
										}
										else {
											cout << "*El codigo ingresado no corresponde a ningun sistema*" << endl << endl;
											valido = false;
										}
									}
									system("pause");
									system("cls");
									cout << endl;
									//Obtener sistema y metodo de compra
									cout << "-Sistema a comprar: " << endl << endl;
									cout << tienda->sistemaToString(cod);
									cout << "-Precio total: " << (tienda->comprarSistemaPreconfig(cod)) + 250 << " dolares" << endl;
									cout << endl;
									cout << "Desea proceder con la compra? ( 1 = SI | 2 = NO ): ";
									cin >> opc;
									cout << endl;
									if (opc == 1) {
										cout << "¡La compra se realizo con exito!" << endl;
									}
									cout << endl;
									system("cls");
								}
								system("cls");
								break;
							}
							case 9: {
								system("cls");
								opc = 1;
								paisU = "Costa Rica";
								ciudadU = "GAM";
								empresa = new Empresa(cedJ, paisU, ciudadU, nomE);
								tienda->agregarCliente(empresa);
								while (opc != 2) {
									cout << endl;
									//Mostrar sistemas preconfigurados del catalaogo
									cout << tienda->mostrarSistemas();
									cout << endl;
									valido = false;
									while (valido == false) {
										cout << "-Ingrese el codigo del sistema que desea comprar: ";
										cin >> cod;
										cout << endl;
										if (tienda->existeSistema(cod) == true) {
											valido = true;
										}
										else {
											cout << "*El codigo ingresado no corresponde a ningun sistema*" << endl << endl;
											valido = false;
										}
									}
									system("pause");
									system("cls");
									cout << endl;
									//Obtener sistema y metodo de compra
									cout << "-Sistema a comprar: " << endl << endl;
									cout << tienda->sistemaToString(cod);
									cout << "-Precio total: " << (tienda->comprarSistemaPreconfig(cod)) + 50 << " dolares" << endl;
									cout << endl;
									cout << "Desea proceder con la compra? ( 1 = SI | 2 = NO ): ";
									cin >> opc;
									cout << endl;
									if (opc == 1) {
										cout << "¡La compra se realizo con exito!" << endl;
									}
									cout << endl;
									system("cls");
								}
								system("cls");
								break;
							}
							case 10: {
								system("cls");
								opc = 1;
								paisU = "Costa Rica";
								ciudadU = "Fuera de la GAM";
								empresa = new Empresa(cedJ, paisU, ciudadU, nomE);
								tienda->agregarCliente(empresa);
								while (opc != 2) {
									cout << endl;
									//Mostrar sistemas preconfigurados del catalaogo
									cout << tienda->mostrarSistemas();
									cout << endl;
									valido = false;
									while (valido == false) {
										cout << "-Ingrese el codigo del sistema que desea comprar: ";
										cin >> cod;
										cout << endl;
										if (tienda->existeSistema(cod) == true) {
											valido = true;
										}
										else {
											cout << "*El codigo ingresado no corresponde a ningun sistema*" << endl << endl;
											valido = false;
										}
									}
									system("pause");
									system("cls");
									cout << endl;
									//Obtener sistema y metodo de compra
									cout << "-Sistema a comprar: " << endl << endl;
									cout << tienda->sistemaToString(cod);
									cout << "-Precio total: " << (tienda->comprarSistemaPreconfig(cod)) + 80 << " dolares" << endl;
									cout << endl;
									cout << "Desea proceder con la compra? ( 1 = SI | 2 = NO ): ";
									cin >> opc;
									cout << endl;
									if (opc == 1) {
										cout << "¡La compra se realizo con exito!" << endl;
									}
									cout << endl;
									system("cls");
								}
								system("cls");
								break;
							}
							default: {
								cout << endl;
								cout << "Opcion invalida" << endl << endl;
								system("pause");
								system("cls");
							}
						}
						system("cls");
						break;
					}
					case 3: {
						op4 = 0;
						break;
					}
					default: {
						cout << endl;
						cout << "Opcion invalida" << endl << endl;
						system("pause");
						system("cls");
					}
				}
			} while (op4 != 0);
			system("cls");
			break;
		}
		case 3: {
			system("cls");
			do {
				cout << endl;
				cout << "----------------MANTENIMIENTO----------------" << endl << endl;
				cout << "[1] Mantenimiento de sistemas preconfigurados" << endl << endl;
				cout << "[2] Mantenimiento de componentes" << endl << endl;
				cout << "[3] Salir" << endl << endl;
				cout << "---------------------------------------------" << endl << endl;
				cout << "Ingrese la opcion que desea realizar: ";
				cin >> op5;

				switch (op5) {
				case 1: {
					system("cls");
					do {
						cout << endl;
						cout << "----------------SISTEMAS PRECONFIGURADOS----------------" << endl << endl;
						cout << "[1] Ingresar" << endl << endl;
						cout << "[2] Editar" << endl << endl; //Falta :(
						cout << "[3] Eliminar" << endl << endl;
						cout << "[4] Mostrar Sistemas" << endl << endl;
						cout << "[5] Reset de Sistemas (Lista de sistemas por defecto)" << endl << endl;
						cout << "[6] Salir" << endl << endl;
						cout << "--------------------------------------------------------" << endl << endl;
						cout << "Ingrese la opcion que desea realizar: ";
						cin >> op6;

						switch (op6) {
						case 1: {
							system("cls");
							cout << endl;
							valido = false;
							while (valido == false) {
								cout << "-Ingrese el codigo para el nuevo sistema: ";
								cin >> cod;
								cout << endl;
								if (tienda->existeSistema(cod) == false) {
									valido = true;
								}
								else {
									cout << "*El codigo ingresado ya esta asociado a un sistema*" << endl << endl;
									valido = false;
								}
							}
							system("pause");
							system("cls");
							cout << endl;
							//Mostrar fuentes 
							cout << tienda->mostrarFuentes();
							cout << endl;
							valido = false;
							while (valido == false) {
								cout << "-Ingrese el modelo de la fuente que desea: ";
								cin >> fue;
								cout << endl;
								if (tienda->existeComponente(fue) == true) {
									valido = true;
								}
								else {
									cout << "*El modelo ingresado no corresponde a ningun componente*" << endl << endl;
									valido = false;
								}
							}
							//Metodo para obtener fuente
							fuente = tienda->getComponente(fue);
							cout << endl;
							system("pause");
							system("cls");
							cout << endl;
							//Mostrar procesadores 
							cout << tienda->mostrarProcesadores();
							cout << endl;
							valido = false;
							while (valido == false) {
								cout << "-Ingrese el modelo del procesador que desea: ";
								cin >> pro;
								cout << endl;
								if (tienda->existeComponente(pro) == true) {
									valido = true;
								}
								else {
									cout << "*El modelo ingresado no corresponde a ningun componente*" << endl << endl;
									valido = false;
								}
							}
							//Metodo para obtener procesador
							procesador = tienda->getComponente(pro);
							cout << endl;
							system("pause");
							system("cls");
							cout << endl;
							//Mostrar parlantes
							cout << tienda->mostrarParlantes();
							cout << endl;
							valido = false;
							while (valido == false) {
								cout << "-Ingrese el modelo del parlante que desea: ";
								cin >> par;
								cout << endl;
								if (tienda->existeComponente(par) == true) {
									valido = true;
								}
								else {
									cout << "*El modelo ingresado no corresponde a ningun componente*" << endl << endl;
									valido = false;
								}
							}
							//Metodo para obtener parlante
							parlante = tienda->getComponente(par);
							cout << endl;
							system("pause");
							system("cls");
							cout << endl;
							//Crear sistema y mostrar el sistema creado
							sistema = new Sistema(cod, fuente, procesador, parlante);
							tienda->agregarSistema(sistema);
							cout << sistema->toString() << endl;
							system("pause");
							//Metodo de compra
							system("cls");
							break;
						}
						case 2: {
							system("cls");
							cout << endl;
							//Mostrar sistemas preconfigurados del catalogo
							cout << tienda->mostrarSistemas();
							cout << endl;
							valido = false;
							while (valido == false) {
								cout << "-Ingrese el codigo del sistema que desea editar: ";
								cin >> cod;
								cout << endl;
								if (tienda->existeSistema(cod) == true) {
									valido = true;
								}
								else {
									cout << "*El codigo ingresado no corresponde a ningun sistema*" << endl << endl;
									valido = false;
								}
							}
							system("pause");
							system("cls");
							cout << endl;
							//Mostrar fuentes
							cout << tienda->mostrarFuentes();
							cout << endl;
							valido = false;
							while (valido == false) {
								cout << "-Ingrese el modelo de la fuente que desea: ";
								cin >> fue;
								cout << endl;
								if (tienda->existeComponente(fue) == true) {
									valido = true;
								}
								else {
									cout << "*El modelo ingresado no corresponde a ningun componente*" << endl << endl;
									valido = false;
								}
							}
							//Metodo para obtener fuente
							cout << endl;
							system("pause");
							system("cls");
							cout << endl;
							//Mostrar procesadores 
							cout << tienda->mostrarProcesadores();
							cout << endl;
							valido = false;
							while (valido == false) {
								cout << "-Ingrese el modelo del procesador que desea: ";
								cin >> pro;
								cout << endl;
								if (tienda->existeComponente(pro) == true) {
									valido = true;
								}
								else {
									cout << "*El modelo ingresado no corresponde a ningun componente*" << endl << endl;
									valido = false;
								}
							}
							//Metodo para obtener procesador
							cout << endl;
							system("pause");
							system("cls");
							cout << endl;
							//Mostrar parlantes
							cout << tienda->mostrarParlantes();
							cout << endl;
							valido = false;
							while (valido == false) {
								cout << "-Ingrese el modelo del parlante que desea: ";
								cin >> par;
								cout << endl;
								if (tienda->existeComponente(par) == true) {
									valido = true;
								}
								else {
									cout << "*El modelo ingresado no corresponde a ningun componente*" << endl << endl;
									valido = false;
								}
							}
							//Metodo para obtener parlante
							cout << endl;
							system("pause");
							system("cls");
							cout << endl;
							//Aplicar cambios al sistema y mostrarlo
							system("cls");
							break;
						}
						case 3: {
							system("cls");
							cout << endl;
							//Mostrar sistemas preconfigurados del catalaogo
							cout << tienda->mostrarSistemas() << endl;
							cout << endl;
							valido = false;
							while (valido == false) {
								cout << "-Ingrese el codigo del sistema que desea eliminar: ";
								cin >> cod;
								cout << endl;
								if (tienda->existeSistema(cod) == true) {
									valido = true;
								}
								else {
									cout << "*El codigo ingresado no corresponde a ningun sistema*" << endl << endl;
									valido = false;
								}
							}
							//Metodo eliminar sistema preconfigurado
							tienda->eliminarSistema(cod);
							system("cls");
							break;
						}
						case 4: {
							system("cls");
							//Mostrar Sistemas
							cout << tienda->mostrarSistemas() << endl;
							system("pause");
							system("cls");
							break;
						}
						case 5: {
							system("cls");
							if (tienda->resetSistemas()) {
								cout << "Se ha restablecido la lista de sistemas" << endl;
							}
							else {
								cout << "No se pudo restablecer la lista de sistemas" << endl;
							}
							system("pause");
							system("cls");
							break;
						}
						case 6: {
							op6 = 0;
							break;
						}
						default: {
							cout << endl;
							cout << "Opcion invalida" << endl << endl;
							system("pause");
							system("cls");
						}
						}
					} while (op6 != 0);
					system("cls");
					break;
				}
				case 2: {
					system("cls");
					do {
						cout << endl;
						cout << "-----------------------COMPONENTES----------------------" << endl << endl;
						cout << "[1] Ingresar" << endl << endl;
						cout << "[2] Editar" << endl << endl; //Falta :(
						cout << "[3] Eliminar" << endl << endl;
						cout << "[4] Mostrar Componentes" << endl << endl;
						cout << "[5] Reset de Componentes (Lista de componentes por defecto)" << endl << endl;
						cout << "[6] Salir" << endl << endl;
						cout << "--------------------------------------------------------" << endl << endl;
						cout << "Ingrese la opcion que desea realizar: ";
						cin >> op7;

						switch (op7) {
						case 1: {
							system("cls");
							cout << endl;
							std::getline(std::cin, cat);
							cout << "-----------------------INGRESAR COMPONENTE----------------------" << endl << endl;
							cout << "[1] Fuente de audio" << endl << endl;
							cout << "[2] Procesador de audio" << endl << endl;
							cout << "[3] Parlante" << endl << endl;
							cout << "----------------------------------------------------------------" << endl << endl;
							cout << "-Seleccione la categoria ( 1 | 2 | 3 ): ";
							cin >> op8;
							cout << endl;
							std::getline(std::cin, com);
							cout << "-Ingrese el componente: ";
							getline(cin, com);
							cout << endl;
							cout << "-Ingrese el modelo: ";
							cin >> mode;
							cout << endl;
							std::getline(std::cin, cat);
							cout << "-Ingrese la caracteristica: ";
							getline(cin, car);
							cout << endl;
							cout << "-Ingrese el precio base: ";
							cin >> preB;
							cout << endl;
							//Metodo ingresar componente
							switch (op8) {
							case 1: cat = "Fuente de audio";
								tienda->agregarComponente(new Fuente(cat, com, mode, car, preB));
								break;

							case 2: cat = "Procesador de audio";
								tienda->agregarComponente(new Procesador(cat, com, mode, car, preB));
								break;
							case 3: cat = "Parlante";
								tienda->agregarComponente(new Parlante(cat, com, mode, car, preB));
								break;
							}
							system("cls");
							break;
						}
						case 2: {
							system("cls");
							cout << endl;
							//Mostrar lista de componentes
							cout << tienda->mostrarComponentes();
							cout << endl;
							valido = false;
							while (valido == false) {
								cout << "-Ingrese el modelo del componente que desea editar: ";
								cin >> mod;
								cout << endl;
								if (tienda->existeComponente(mod) == true) {
									valido = true;
								}
								else {
									cout << "*El modelo ingresado no corresponde a ningun componente*" << endl << endl;
									valido = false;
								}
							}
							system("pause");
							system("cls");
							//Obtener componente y mostrarlo
							cout << tienda->componenteToString(mod);
							cout << endl;
							//Metodo editar componente
							system("cls");
							break;
						}
						case 3: {
							system("cls");
							cout << endl;
							//Mostrar lista de componentes
							cout << tienda->mostrarComponentes();
							cout << endl;
							valido = false;
							while (valido == false) {
								cout << "-Ingrese el modelo del componente que desea eliminar: ";
								cin >> mod;
								cout << endl;
								if (tienda->existeComponente(mod) == true) {
									valido = true;
								}
								else {
									cout << "*El modelo ingresado no corresponde a ningun componente*" << endl << endl;
									valido = false;
								}
							}
							//Metodo eliminar componente
							tienda->eliminarComponente(mod);
							system("cls");
							break;
						}
						case 4: {
							system("cls");
							cout << tienda->mostrarComponentes() << endl;
							system("pause");
							system("cls");
							break;
						}
						case 5: {
							system("cls");

							if (tienda->resetComponentes()) {
								cout << "Se ha restablecido la lista de componentes" << endl;
							}
							else {
								cout << "No se pudo restablecer la lista de componentes" << endl;
							}

							system("pause");
							system("cls");
							break;
						}
						case 6: {
							op7 = 0;
							break;
						}
						default: {
							cout << endl;
							cout << "Opcion invalida" << endl << endl;
							system("pause");
							system("cls");
						}
						}
					} while (op7 != 0);
					system("cls");
					break;
				}
				case 3: {
					op5 = 0;
					break;
				}
				default: {
					cout << endl;
					cout << "Opcion invalida" << endl << endl;
					system("pause");
					system("cls");
				}
				}
			} while (op5 != 0);
			system("cls");
			break;
		}
		case 4: {
			exit(-1);
			break;
		}
		default: {
			cout << endl;
			cout << "Opcion invalida" << endl << endl;
			system("pause");
			system("cls");
		}
		}
	} while (op != 0);

	system("pause");
	return 0;
}