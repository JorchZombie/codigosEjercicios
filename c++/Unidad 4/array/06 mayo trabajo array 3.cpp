#include <iostream>
#include <stdlib.h>
using namespace std;
int vec[5];
int n,c,cont;

int main (){
for (cont=0;cont<5;cont++)
{
vec[cont];
cout<<"introduce un numero ";
cin>>n;	
c=n*n;
cout<<"vector "<<cont<<" el cuadrado de "<<n<<" es "<<c;
cout<<endl;
}
return 0;
}
