#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* FUNCIONES: ES UN CONJUNTO DE SENTENCIAS Y OPERACIONES QUE REALIZAN UNA DETERMINADA
TAREA Y QUE PUEDE RETORNAR UN SOLO VALOR, ADEMAS DE PODER RECIBIR LOS PARAMETROS QUE
SON VALORES QUE NECESITA LA FUNCION PARA PODER LLEVAR A CABO SU  TAREA
EN EL LENGUAJE C++ EXISTEN DOS TIPOS DE FUNCIONES:
-FUNCION CON RETURN: DONDE SE INDICA EL TIPO DE DATO QUE DEVOLVERA
-FUNCION SIN RETURN O VOID: DONDE SOLO REALIZA LA TAREA ESPECIFICA
Ejemplos: 
Crear una funcion que reciba como parametro un numero cualquiera y retorne la mitad
de dicho numero */

double calcular_la_mitad(double numero)
{
	double mitad = numero / 2;
	return mitad;
}

int main(int argc, char** argv) 
{
	cout<<"la mitad es: "<<calcular_la_mitad(3)<<endl;
	
	double numero;
	cout<<"ingerse un numero: ";
	cin>>numero;
	
	cout<<"la mitad del numero "<<numero<<" es: "<<calcular_la_mitad(numero)<<endl;
	system("pause");
	return 0;
}
