#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long calcular_factorial(int numero)
{
	long factor = 1;
	int valor = 1;
	while(valor <= numero)
	{
		factor *= valor;
		valor++;
	}
	return factor;
}

int main(int argc, char** argv) 
{
	int n;
	cout<<"ingrese el valor de n: ";
	cin>>n;
	
	cout<<"el factorial de "<<n<< " es: "<<calcular_factorial(n)<<endl;
	system("pause");
	return 0;
}
