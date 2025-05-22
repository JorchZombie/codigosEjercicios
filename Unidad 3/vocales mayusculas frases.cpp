#include <iostream>
#include <cstring>
using namespace std;
int x,a=0,A=0,e=0,E=0,i=0,I=0,o=0,O=0,u=0,U=0,cont=0,palabra,cont2=0;
char frase[50];
string resp;
int main(int argc, char *argv[]) {
	do{
	cout<<"introduce una frase \n";
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
			case 'A':A++;break;
			case 'e':e++;break;
			case 'E':E++;break;
			case 'i':i++;break;
			case 'I':I++;break;
			case 'o':o++;break;
			case 'O':O++;break;
			case 'u':u++;break;
			case 'U':U++;break;
			}
		}
	cout<<"el numero de vocales 'a' es "<<a<<endl;
	cout<<"el numero de vocales 'A' es "<<A<<endl;	
	cout<<"el numero de vocales 'e' es "<<e<<endl;
	cout<<"el numero de vocales 'E' es "<<E<<endl;
	cout<<"el numero de vocales 'i' es "<<i<<endl;
	cout<<"el numero de vocales 'I' es "<<I<<endl;
	cout<<"el numero de vocales 'o' es "<<o<<endl;
	cout<<"el numero de vocales 'O' es "<<O<<endl;
	cout<<"el numero de vocales 'u' es "<<u<<endl;
	cout<<"el numero de vocales 'U' es "<<U<<endl;
	cout<<"el total de mayusculas es de "<<cont2<<endl;
	cout<<"el total de frases es "<<cont<<endl;
	
	cout<<"quieres hacerlo otra ves?\n";
	cin>>resp;}
	while (resp == ("si"));
	return 0;
}
