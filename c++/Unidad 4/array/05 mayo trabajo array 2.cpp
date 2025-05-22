#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int a[1000],b[10];
int n,i,c,mayor=0,suma=0;

int main(){
cout<<"Numeros Aleatoreos"<<endl;	
	srand(time(NULL));
	for (i=0;i<1000;i++)											//numero aleatoreos
	{
		n=rand() % (1000);
		suma=suma+n;
		a[i]=n;						//se van guardado los valores en la memoria
		cout<<"vector "<<i<<" su numero es "<<n<<endl;
	}
cout<<"la suma de todo el vector es "<<suma<<endl;	
cout<<"============================"<<endl;
cout<<"Numero Mayor"<<endl;
	for (i=0;i<10;i++)
	{
	cout<<"ingresa un numero ";
	cin>>b[i];	
	if(b[i]>mayor){
	mayor=b[i];}
	c=b[i]%2;							//dice cual numero es par
	if (c==0){	
	cout<<"es par"<<endl;}
	}
	cout<<"el numero mayor es "<<mayor;
	return 0;
}
