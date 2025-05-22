#include <iostream>
using namespace std;
	int n,x;
int main(int argc, char *argv[]) {
	cout<<"       menu"<<endl<<endl;
	cout<<"1.-imprimir numero"<<endl;
	cout<<"2.-numero impares de 100 y 7"<<endl;
	cout<<"3.-numero factorial"<<endl;
	cout<<"selecciona una opcion ";
	cin>>x;
	switch (x)
{	
	case 1:
	{
	int cont=20;
	for (n=1;n<=cont;n++)
		{
		cout<<cont<<endl;
			if (n == cont)
			{
			cont=cont - 1;
			n=0;
			}
		}
	break;
	}
	case 2:
	{
	int par,par2,impar=0;
	for (n=0;n<100;n++)
		{
			impar=impar+1;
			par=impar%2;
			par2=impar%7;
			if (par>0 && par2>0)
			{
			cout<<"los numeros impares son "<<impar<<endl;
			}
		}
		break;
	}
	case 3:
	{
	int fact=1,n,cont=1;
	cout<<"ingrese el total de los factoriales ";
	cin>>n;
	while (cont<=n)	
		{
		for(x=1;x<=n;x++)
			{
			fact=fact*x;
			cout<<"el factorial de "<<x<<" es "<<fact<<endl;
			cont++;
			}
		}
	break;
	}
}
	return 0;
}

