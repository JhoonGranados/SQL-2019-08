#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int multiplicacion(int numero)
{
	int mul = numero * 2;
	return mul;
}
int main(int argc, char** argv) 
{
	int n;
	cout<<"ingrese un numero: ";
	cin>>n;
	
	cout<<"el numero "<<n<<" * 2 es: "<<multiplicacion(n)<<endl;
	system("pause");
	return 0;
}
