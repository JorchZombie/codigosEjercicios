#include <iostream>
using namespace std;
	int par();
	int suma1();
	int suma2();
	int piramide();
	
int main(int argc, char *argv[]) {
	par();
	cout<<"----------"<<endl;
	cout<<"la suma acumulada de 5 es "<<suma1()<<endl;;
	cout<<"----------"<<endl;
	cout<<"la suma acumulada de 2 es "<<suma2()<<endl;
	cout<<"----------"<<endl;
	piramide();
	return 0;
}
int par()
	{
	int n;
		for (n=1;n<=100;n++)
		{
		if(n%2==0)
			{
			cout<<n<<" es par\n";
			}
		}
		return 0;	
	}
int suma1()
	{
	int n=5;
	float suma=0;
		for(int i=1;i<=5;i++)
		{
		suma += 0.456666;	
		}
	cout<<"la suma acumulada de 5 es "<<suma<<endl;
	return suma;	
	}
int suma2()
	{
	int n=2;
	float suma=0;
		for(int i=1;i<=n;i++)
		{
			suma += 0.75;	
		}
	cout<<"la suma acumulada de 2 es "<<suma<<endl;
	return suma;
	}
int piramide()
	{
	int	n=0,cont;
	while (cont<5)
	{
	n++;
	cont=0;
		while (cont<n)
		{
			cont=cont+1;
			cout<<n;
		}
	cout<<"\n";	
	}
	return 0;
	}
