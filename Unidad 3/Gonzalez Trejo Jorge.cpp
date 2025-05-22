#include <iostream>
#include <cstring>
using namespace std;
int x,a=0,e=0,i=0,o=0,u=0,cont=0,palabra,cont2=0;
char frase[50];
int main(int argc, char *argv[]) {
	cout<<"introduce una oracion \n";
	gets(frase);
	palabra=strlen(frase);
	while(x<palabra)
	{
		while (x<palabra && frase[x]==' '){
		x++;	
		}
		if(x<palabra){
		cont++;	
		}
		while(x<palabra && frase[x]!=' '){
		x++;	
		}
		
	}
		for (x=0;x<50;x++)
		{
			if ((frase[x]>=65) && (frase[x]<=95))
			{
				cont2++;
			}
			
		}
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
	cout<<"el total de mayusculas es de "<<cont2<<endl;
	cout<<"el total de frases es "<<cont<<endl;
	

	return 0;
}
