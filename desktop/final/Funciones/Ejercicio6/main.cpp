#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int arreglo[10];
void llenar_arreglo()
{
	srand(time(0));
	for(int i = 0; i < 10; i++)
	{
		arreglo[i] = rand()%100+1;//rango del 1 al 100
	}
}

void listar_arreglo()
{
	for(int i = 0; i<10; i++)
	{
		cout<<"posicion "<<i<<" : "<<arreglo[i]<<endl;
	}
}
int main(int argc, char** argv) 
{
	llenar_arreglo();
	listar_arreglo();
	system("pause");
	return 0;
}
