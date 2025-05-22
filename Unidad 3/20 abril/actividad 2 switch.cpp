#include <iostream>
using namespace std;
	int x,n;
int main(int argc, char *argv[]) {
	cout<<"               Menu\n";
	cout<<" 1.- Suma acumulada\n";
	cout<<" 2.- El mayor de los numeros\n";
	cout<<"Selecciona una opcion ";
	cin>>x;
	switch (x)
	{
	case 1:
		{
		int cont=0,suma=0,resul;
		cout<<"Ingresa un numero ";
		cin>>n;
		while (cont<n)
			{
			cont++;
			suma=suma+cont;
			}
			resul=suma*3;
		cout<<"la suma acumulada es "<<resul;
		break;
		}
	case 2:
		{
		int resul,total,i;
		cout<<"Ingresa un numero\n";
		cin>>n;
		for (i=0;i<n;i++)
			{
			cout<<i+1<<" ingresa otro numero ";
			cin>>resul;
			if (i==0)
				{
			total=resul;
				}
			else
				{
				if (resul>total) total=resul;
				}
			}
		cout<<"el numero mayor es "<<total;
		break;
		}
	}
	return 0;
}

