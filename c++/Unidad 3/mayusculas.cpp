#include <iostream>
using namespace std;
	int x,cont=0;
	char frase[50];
int main(int argc, char *argv[]) {

	cout<<"introduce una frase ";
	cin>>frase;
	for (x=0;x<50;x++)
	{
		if ((frase[x]>=65) && (frase[x]<=95))
		{
		cont++;
		}
		
	}
	cout<<"el total de mayusculas es de "<<cont;
	return 0;
}

