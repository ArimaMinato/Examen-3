#include <iostream>

using namespace std; 

int factorial(int n);

int main()
{
	int numero_fact, facto;
	cout << "Ingresa el numero que deseas saber su factorial: ";
	cin >> numero_fact;
	facto = factorial(numero_fact);
	cout << "El valor factorial de " << numero_fact << " es: " << facto;
	return 0;
}

int factorial(int n)
{
	if (n < 1)
	{
		return 1;
	}
	else
	{
		return n*factorial(n - 1);
	}
	
}