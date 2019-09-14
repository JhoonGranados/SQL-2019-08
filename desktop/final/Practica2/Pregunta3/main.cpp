#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int matriz[9][5], n;
	srand(time(0));
	
	for(int i = 0; i < 9 ; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			n = rand()%227+11;
			if(n%2!= 0 && n%3 != 0 && n%5!= 0 && n%7!= 0 && n%11!= 0)
			{
				matriz[i][j] = n;
				cout<<matriz[i][j]<<" ";
			}
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}
