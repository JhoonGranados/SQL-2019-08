#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int calcular_mayor(int valor1, int valor2)
{
	int mayor;
	if(valor1>valor2)
	{
		mayor = valor1;
	}
	else
	{
		mayor = valor2;
	}
	return mayor;
}

int main(int argc, char** argv) 
{
	int v1, v2;
	cout<<"ingrese los dos numeros: ";
	cin>>v1>>v2;
	
	cout<<"el mayor valor es: "<<calcular_mayor(v1,v2)<<endl;
	system("pause");
	return 0;
}
