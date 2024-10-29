#include <iostream>
using namespace std; 
int factorial(int n);
void cajero_automatico(void);

/**
	Programa con un menu para que el usuario decida si calcular el factorial de un numero o utilizar un cajero automatico
	Autor: Ian L. Dominguez Ramirez
	Version: 1.0
	Descripcion: menu con la opciones de poder calcular el factorial de un numero o acceder a un cajero automatico para la consulta, retiro o mostrar el efectivo en un cajero automatico
**/
int opc1; /**Variable global para hacer modificaciones **/
int main()
{
	//int opc1;
	do 
	{
		cout <<endl<< "(1) Factorial de un numero"
			<< endl << "(2) Cajero automatico"
			<< endl << "(0) Salir del programa"
			<< endl << "Ingresa la opcion deseada: ";
		cin >> opc1;
		switch (opc1)
		{
		case 1:
			int numero_fact, facto;
			cout << "Ingresa el numero que deseas saber su factorial: ";
			cin >> numero_fact;
			facto = factorial(numero_fact);
			cout << "El valor factorial de " << numero_fact << " es: " << facto<<endl;
			break;
		case 2:
			cajero_automatico();
			break;
		case 0:
			cout<<endl<<"Saliendo del programa...";
			break;
		default:
			cout << endl << "Regresando al menu, coloque una opcion valida...";
			break;
		}
	} while (opc1 != 0); /**Mientras que opc1 no sea 0, no se va a cerrar el bucle y por ende el programa**/
	return 0;
}

/**
	Calcula la funcion factorial de un numero recursivamente
	Parametros: n es el numero que del cual se quiere saber su factorial
	Return: regresa 1 si n es menor o igual a 1, o el numero por la funcion factorial del numero
**/

int factorial(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n*factorial(n - 1); /** El numero n se va a multiplicar por el factorial de n, se asi recursivamente, hasta llegar a 1 **/
	}
	
}

/**
	Menu del cajero automatico, realiza las acciones de consultar el cajero y realizar las operaciones de mostrar o retirar efectivo del cajero automatico

**/
void cajero_automatico(void)
{
	int saldo = 20000,retiro, mostrar;
	int opc;
	do
	{
		cout << endl << "(1) Consultar saldo"
			<< endl << "(2) Retirar efectivo"
			<< endl << "(3) Mostrar efectivo"
			<< endl<< "(0) salir del menu"
			<< endl<<"Ingrese la opcion deseada: ";
		cin >> opc; 
		switch (opc)
		{
		case 1:
			cout <<endl<< "Saldo: " << saldo;
			break;
		case 2:
			cout <<endl<< "Cuanto desea retirar: ";
			cin >> retiro;
			saldo = saldo - retiro;
			break;
		case 3:
			cout << endl << "Mostrar saldo: ";
			cin >> mostrar;
			saldo = saldo + mostrar;
			break;
		case 0:
			cout << endl << "Saliendo del menu...";
			break;
		default:
			cout<<"No se ha encontrado esa opcion, por favor intenta de nuevo";
			break;
		}
	} while (opc != 0);
	opc1 = 5;
}