#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void calcular_venta()
{
	double precio, igv, total, importe;
	int cantidad;
	cout<<"ingrese precio del producto: ";
	cin>>precio;
	cout<<"ingrese cantidad a comprar: ";
	cin>>cantidad;
	
	importe = precio* cantidad;
	igv = importe * 0.18;
	total = importe + igv;
	
	cout<<"Importe S/."<<importe<<endl;
	cout<<"IGV: "<<igv<<endl;
	cout<<"total a pagar S/."<<total<<endl;
}
int main(int argc, char** argv) 
{
	calcular_venta();
	system("pause");
	return 0;
}
