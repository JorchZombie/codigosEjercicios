#include <iostream>
#include <stdlib.h>
using namespace std;
int a[5],n,mayor=0;

int main(){
for (n=0;n<5;n++)
	{
	cout<<"ingresa un numero "; 
	cin>>a[n];
	if (a[n]>mayor)
	mayor=a[n];
	}
cout<<"el numero mayor es "<<mayor;	
return 0;	
}
