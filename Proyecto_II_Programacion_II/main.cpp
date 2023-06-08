#include "Tienda.h"

int main() {
	int op, op2, op3 = 0;
	int numS, op4 = 0;
	int op5, op6 = 0;
	int op7 = 0;
	double preB = 0.0;
	string fue, pro, par, ced, corE, nac, nomC, nomE, cedJ, paisU, ciudadU, mod;
	string cat, com, mode, car;

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
							cin >> numS;
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
							cin >> numS;
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
							cin >> numS;
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
								cout << "[2] Editar" << endl << endl;
								cout << "[3] Eliminar" << endl << endl;
								cout << "[4] Salir" << endl << endl;
								cout << "--------------------------------------------------------" << endl << endl;
								cout << "Ingrese la opcion que desea realizar: ";
								cin >> op6;

								switch (op6) {
									case 1: {
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
									case 2: {
										system("cls");
										cout << endl;
										//Mostrar sistemas preconfigurados del catalogo
										cout << endl;
										cout << "Ingrese el numero del sistema que desea editar: ";
										cin >> numS;
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
										cout << endl;
										cout << "Ingrese el numero del sistema que desea eliminar: ";
										cin >> numS;
										//Metodo eliminar sistema preconfigurado
										system("cls");
										break;
									}
									case 4: {
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
								cout << "[2] Editar" << endl << endl;
								cout << "[3] Eliminar" << endl << endl;
								cout << "[4] Salir" << endl << endl;
								cout << "--------------------------------------------------------" << endl << endl;
								cout << "Ingrese la opcion que desea realizar: ";
								cin >> op7;

								switch (op7) {
								case 1: {
									system("cls");
									cout << endl;
									std::getline(std::cin, cat);
									cout << "-Ingrese la categoria: ";
									getline(cin, cat);
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
									cout << endl;
									cout << "Ingrese el modelo del componente que desea eliminar: ";
									cin >> mod;
									//Metodo eliminar componente
									system("cls");
									break;
								}
								case 4: {
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