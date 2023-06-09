#include "Tienda.h"

int main() {
	Tienda* tienda = new Tienda();
	int op, op2, op3, op4 = 0;
	int op5, op6 = 0;
	int op7, op8 = 0;
	double preB = 0.0;
	string fue, pro, par, ced, corE, nac, nomC, nomE, cedJ, paisU, ciudadU, mod;
	string cat, com, mode, car, id;
	Componente* fuente = nullptr;
	Componente* procesador = nullptr;
	Componente* parlante = nullptr;
	Sistema* sistema = nullptr;

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
					//Mostrar sistemas preconfigurados del catalaogo
					cout << endl;
					cout << "Ingrese el numero del sistema que desea comprar: ";
					cin >> id;
					//Metodo de compra
					system("cls");
					break;
				}
				case 2: {
					system("cls");
					cout << endl;
					//Mostrar fuentes 
					cout << endl;
					cout << "Ingrese el modelo de la fuente que desea: ";
					cin >> fue;
					//Metodo para obtener fuente
					cout << endl;
					system("pause");
					system("cls");
					cout << endl;
					//Mostrar procesadores 
					cout << endl;
					cout << "Ingrese el modelo del procesador que desea: ";
					cin >> pro;
					//Metodo para obtener procesador
					cout << endl;
					system("pause");
					system("cls");
					cout << endl;
					//Mostrar parlantes
					cout << endl;
					cout << "Ingrese el modelo del parlante que desea: ";
					cin >> par;
					//Metodo para obtener parlante
					cout << endl;
					system("pause");
					system("cls");
					cout << endl;
					//Crear sistema y mostrar el sistema creado
					//Metodo de compra
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
							cout << endl;
							//Mostrar fuentes 
							cout << endl;
							cout << "Ingrese el modelo de la fuente que desea: ";
							cin >> fue;
							cout << endl;
							//Metodo de compra
							system("cls");
							break;
						}
						case 2: {
							system("cls");
							cout << endl;
							//Mostrar procesadores
							cout << endl;
							cout << "Ingrese el modelo del procesador que desea: ";
							cin >> pro;
							cout << endl;
							//Metodo de compra
							system("cls");
							break;
						}
						case 3: {
							system("cls");
							cout << endl;
							//Mostrar parlantes
							cout << endl;
							cout << "Ingrese el modelo del parlante que desea: ";
							cin >> par;
							cout << endl;
							//Metodo de compra
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
					cout << "Ingrese la cedula: ";
					cin >> ced;
					cout << endl;
					cout << "-Ingrese el nombre completo: ";
					cin >> nomC;
					cout << endl;
					cout << "-Ingrese el correo electronico: ";
					cin >> corE;
					cout << endl;
					cout << "-Ingrese la nacionalidad: ";
					cin >> nac;
					cout << endl;
					cout << "-Ingrese el nombre del pais de ubicacion: ";
					cin >> paisU;
					cout << endl;
					cout << "-Ingrese el nombre de la ciudad de ubicacion: ";
					cin >> ciudadU;
					cout << endl;
					//Crear e ingresar cliente
					system("pause");
					system("cls");
					//Mostrar sistemas preconfigurados del catalaogo
					cout << endl;
					cout << "Ingrese el numero del sistema que desea comprar: ";
					cin >> id;
					//Metodo de compra
					system("cls");
					break;
				}
				case 2: {
					system("cls");
					cout << endl;
					cout << "Ingrese el nombre de la empresa: ";
					cin >> nomE;
					cout << endl;
					cout << "-Ingrese la cedula juridica: ";
					cin >> cedJ;
					cout << endl;
					cout << "-Ingrese el nombre del pais de ubicacion: ";
					cin >> paisU;
					cout << endl;
					cout << "-Ingrese el nombre de la ciudad de ubicacion: ";
					cin >> ciudadU;
					cout << endl;
					//Crear e ingresar empresa
					system("pause");
					system("cls");
					//Mostrar sistemas preconfigurados del catalaogo
					cout << endl;
					cout << "Ingrese el numero del sistema que desea comprar: ";
					cin >> id;
					//Metodo de compra
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
							cout << "Digite el id para el nuevo sistema: ";
							cin >> id;
							cout << endl;
							system("pause");
							system("cls");
							cout << endl;
							//Mostrar fuentes 
							cout << tienda->mostrarFuentes();
							cout << endl;
							cout << "Ingrese el modelo de la fuente que desea: ";
							cin >> fue;
							//Metodo para obtener fuente
							fuente = tienda->getComponente(fue);
							cout << endl;
							system("pause");
							system("cls");
							cout << endl;
							//Mostrar procesadores 
							cout << tienda->mostrarProcesadores();
							cout << endl;
							cout << "Ingrese el modelo del procesador que desea: ";
							cin >> pro;
							//Metodo para obtener procesador
							procesador = tienda->getComponente(pro);
							cout << endl;
							system("pause");
							system("cls");
							cout << endl;
							//Mostrar parlantes
							cout << tienda->mostrarParlantes();
							cout << endl;
							cout << "Ingrese el modelo del parlante que desea: ";
							cin >> par;
							//Metodo para obtener parlante
							parlante = tienda->getComponente(par);
							cout << endl;
							system("pause");
							system("cls");
							cout << endl;

							//Crear sistema y mostrar el sistema creado
							sistema = new Sistema(id, fuente, procesador, parlante);
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
							cout << endl;
							cout << "Ingrese el numero del sistema que desea editar: ";
							cin >> id;
							cout << endl;
							system("pause");
							system("cls");
							cout << endl;
							//Mostrar fuentes
							cout << endl;
							cout << "Ingrese el modelo de la fuente que desea: ";
							cin >> fue;
							//Metodo para obtener fuente
							cout << endl;
							system("pause");
							system("cls");
							cout << endl;
							//Mostrar procesadores 
							cout << endl;
							cout << "Ingrese el modelo del procesador que desea: ";
							cin >> pro;
							//Metodo para obtener procesador
							cout << endl;
							system("pause");
							system("cls");
							cout << endl;
							//Mostrar parlantes
							cout << endl;
							cout << "Ingrese el modelo del parlante que desea: ";
							cin >> par;
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
							cout << "Ingrese el numero del sistema que desea eliminar: ";
							cin >> id;
							//Metodo eliminar sistema preconfigurado
							tienda->eliminarSistema(id);
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
							cout << "-Seleccione la categoria: ";
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
							cout << endl;
							cout << "Ingrese el modelo del componente que desea editar: ";
							cin >> mod;
							system("pause");
							system("cls");
							//Obtener componente y mostrarlo
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
							cout << "Ingrese el modelo del componente que desea eliminar: ";
							cin >> mod;
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