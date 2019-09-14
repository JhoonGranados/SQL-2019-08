#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int matriz[6][6], sumaP = 0, sumaS = 0, f0 =0,f1 =0,f2 =0,f3 =0,f4 =0,f5 =0, 
	c0 =0,c1 =0,c2 =0,c3 =0,c4 =0,c5 =0;
	srand(time(0));
	//LLENA MATRIZ Y MUESTRA
	for(int i = 0; i<6; i++)
	{
		for(int j = 0; j < 6; j++)
		{
			matriz[i][j] = rand()%9+1;
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	//SUMA DIAGONAL PRINCIPAL
	for(int i = 0; i<6; i++)
	{
		for(int j = 0; j < 6; j++)
		{
			if(i==j)
			{
				sumaP += matriz[i][j];
			}
		}
	}
	//SUMA DIAGONAL SECUNDARIA
	for(int i = 0; i<6; i++)
	{
		for(int j = 5; j >= 0; j--)
		{
			if(i+j == 5)
			{
				sumaS += matriz[i][j];
			}
		}
	}
	//SUMA DE VALORES POR FILA
	for(int i = 0; i<6; i++)
	{
		for(int j = 0; j < 6; j++)
		{
			if(i == 0)
			{
				f0 += matriz[i][j];
			}
			if(i == 1)
			{
				f1 += matriz[i][j];
			}
			if(i == 2)
			{
				f2 += matriz[i][j];
			}
			if(i == 3)
			{
				f3 += matriz[i][j];
			}
			if(i == 4)
			{
				f4 += matriz[i][j];
			}
			if(i==5)
			{
				f5 += matriz[i][j];
			}
		}
	}
	//SUMA DE VALORES POR COLUMNA
	for(int i = 0; i<6; i++)
	{
		for(int j = 0; j < 6; j++)
		{
			if(j == 0)
			{
				c0 += matriz[i][j];
			}
			if(j == 1)
			{
				c1 += matriz[i][j];
			}
			if(j == 2)
			{
				c2 += matriz[i][j];
			}
			if(j == 3)
			{
				c3 += matriz[i][j];
			}
			if(j == 4)
			{
				c4 += matriz[i][j];
			}
			if(j==5)
			{
				c5 += matriz[i][j];
			}
		}
	}
	cout<<"la suma de la diagonal principal es: "<<sumaP<<endl;
	cout<<"la suma de la diagonal secundaria es: "<<sumaS<<endl;
	cout<<"fila 0: "<<f0<<endl<<"fila 1: "<<f1<<endl<<"fila 2: "<<f2<<endl<<"fila 3: "<<f3<<endl<<"fila 4: "<<f4<<endl<<"fila 5: "<<f5<<endl;
	cout<<"col 0: "<<c0<<endl<<"col 1: "<<c1<<endl<<"col 2: "<<c2<<endl<<"col 3: "<<c3<<endl<<"col 4: "<<c4<<endl<<"col 5: "<<c5<<endl;
	
	system("pause");
	return 0;
}
