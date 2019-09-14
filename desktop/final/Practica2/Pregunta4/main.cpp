#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Crear una función (sub proceso) que reciba como parámetro las 4 notas del
alumno y calcule el promedio de notas. Dicha función deberá retornar la palabra
“Aprobado” si el promedio es mayor o igual a 10.5, sino la palabra
“Desaprobado”. Crear otra función para realizar el proceso de ingreso de las
notas y para visualizar el promedio y el mensaje “Aprobado” o “Desaprobado”.
*/

float promedio(float n1, float n2, float n3, float n4)
{
	float promedio = (n1+n2+n3+n4)/4;
	if(promedio >= 10.5)
	{
		cout<<"Aprobado"<<endl<<promedio<<endl;
	}
	else
	{
		cout<<"desaprobado"<<endl<<promedio<<endl;
	}
}

void ingresar_notas()
{
	float n1, n2, n3, n4;
	cout<<"ingresar las 4 notas: ";
	cin>>n1>>n2>>n3>>n4;
	promedio(n1,n2,n3,n4);
}

int main(int argc, char** argv) 
{
	ingresar_notas();
	system("pause");
	return 0;
}
