#include <iostream>
using namespace std;
	int x,a=0,e=0,i=0,o=0,u=0;
	char frase [50];
int main(int argc, char *argv[]){

	cout<<"ingresa la palabra: " ;
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
	cout<<"el numero de vocales 'u' es "<<u;
	return 0;
}

