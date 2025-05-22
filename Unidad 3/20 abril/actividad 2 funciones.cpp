#include <iostream>
using namespace std;
	int n;
	int suma();
	int numero();
int main(int argc, char *argv[]) {
	
		cout<<"la suma acumulada es "<<suma()<<endl;
		cout<<"============================="<<endl;
		cout<<"el numero mayor es "<<numero();
		return 0;
}		
int suma()
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
		return resul;
		}
int numero()
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
		return total;
		}
	

