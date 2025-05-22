#include <iostream>
using namespace std;
	int n,x,cont,a,e,i,o,u;
	string resp;
	char frase[50];
int main(int argc, char *argv[]) {
	do
	{
	cout<<"            menu"<<endl<<endl;
	cout<<"1.- Saber cuantas Mayusculas hay"<<endl;
	cout<<"2.- Saber Cuantas vocales hay hay"<<endl;
	cout<<"selecciona una opcion por favor ";
	cin>>n;
		switch (n)
		{
		case 1:
			{
			cout<<"introduce una frase ";
			cont=0;
			cin>>frase;
			for (x=0;x<50;x++)
			{
				if ((frase[x]>=65) && (frase[x]<=95))
				{
					cont++;
				}
				
			}
			cout<<"el total de mayusculas es de "<<cont<<endl;
			break;
			}
		case 2:
			{
				cout<<"ingresa la palabra: " ;
				a=0;
				e=0;
				i=0;
				o=0;
				u=0;	
				cin>>frase;
				for (x=0;x<=50;x++)
				{
					switch (frase[x])
					{
					case 'a':a++;break;
					case 'e':e++;break;
					case 'i':i++;break;
					case 'o':o++;break;
					case 'u':u++;break;
					
					}
				}
				cout<<"el numero de vocales 'a' es "<<a<<endl;
				cout<<"el numero de vocales 'e' es "<<e<<endl;
				cout<<"el numero de vocales 'i' es "<<i<<endl;
				cout<<"el numero de vocales 'o' es "<<o<<endl;
				cout<<"el numero de vocales 'u' es "<<u<<endl;
				break;
			}
		}
		cout<<"deseas volver a internarlo ";
		cin>>resp;		
	} 
	while(resp == "si");
	return 0;
}

