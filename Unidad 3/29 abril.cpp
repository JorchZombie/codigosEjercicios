#include <iostream>
using namespace std;
int n;
int factorial (int);

int main(){
	cout<<"dame un numero ";
	cin>>n;
 cout<<"el factorial de "<<n<<" es "<<factorial(n);
	return 0;
}

int factorial(int n)
{
	int fact=1,cont=0;
	while(n>cont)
		{
		cont=cont+1;
		fact=cont*fact;
		}
	return fact;
}
