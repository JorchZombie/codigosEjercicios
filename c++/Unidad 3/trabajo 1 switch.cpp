#include <iostream>
using namespace std;
	int n,x,cont,fact,suma;
	string resp;
int main(int argc, char *argv[]) {
	do{
	cout<<"				menu perron				"<<endl;
	cout<<"1.-  suma acumulada\n";
	cout<<"2.-  factorial\n"; 
	cout<<"3.-  Numero mayor\n";
	cout<<"4.-  numeros random 1-100\n";
	cout<<"5.-  de 100 numeros muestra cuales son pares"<<endl<<endl;
	cout<<"seleccion una opción porfavor ";
	cin>>x;
	switch (x)
	{
	case 1:
	{
		cout<<"Introduce un numero ";
		cont=0;
		suma=0;
		cin>>n;
		while(n>cont){
		cont=cont+1;
		suma=suma+cont;
		}
		cout<<"la suma acomulada es "<<suma<<"\n";
		break;
	}
	case 2:	
	{	
		cout<<"Introduce un numero ";
		cont=1;
		fact=1;
		cin>>n;
		while(cont<n)
		{
		cont=cont+1;
		fact=cont*fact;
		}
		cout<<"el factorial del numero es "<<fact<<"\n";
		break;
	}
	case 3:
	{
		int n,numerosu,maxi;
		cout<<"ingresa un numero ";
		cin>>n;
		for (int i=0;i<n;i++)
		{
		cout<<i+1<<".-"<<"dame un numero ";
		cin>>numerosu;
		if (numerosu>maxi){
		maxi=numerosu;	
			}	
		}
		cout<<"el numero mayor es "<<maxi<<endl;
		break;	
	}
	case 4:
	{
		cout<<"Ingresa un numero porfas ";
		cont=0;
		cin>>n;
		while (cont<100)
		{
		n=rand()%100;
		cout<<"tu numero random es "<<n<<endl;
		cont++;
		}
	}	
	case 5:
	{
		cout<<"ingresa un numero";
		cin>>n;
		while (cont<20)
		{
		n=rand()%100;
		cout<<"tu numero es "<<n<<"\n";
		cont+1;
		if (n%2==0)
			{	
		cout<<"es par ";};
		}
	}
	default:cout<<"no existe la opcion\n ";break;	
	}

	cout<<"desea volverlo hacer, buapo ";
	cin>>resp;
	}
	while (resp == "si");
	return 0;
}

