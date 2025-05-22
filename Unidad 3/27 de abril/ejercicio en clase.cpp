#include <iostream>
using namespace std;
int n;
int suma(int);

int main(){
cout<<"ingresa un numero ";
cin>>n;

cout<<"la suma acumulada de "<<n<<" es "<<suma(n);
return 0;
}

int suma(int n)
{
	int i,suma=0;	
		for (i=0;i<=n;i++)
		{
			suma=suma+i;
		}
	return suma;	
}

