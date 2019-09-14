#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int n, mul;
	cout<<"ingresar el numero: ";
	cin>>n;
	
	for(int i = 0; i <= 15; i++)
	{
		mul = n * i;
		cout<<n<<" * "<<i<<" = "<<mul<<endl;
	}
	system("pause");
	return 0;
}
