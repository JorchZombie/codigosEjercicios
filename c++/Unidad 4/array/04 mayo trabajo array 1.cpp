#include <iostream>
using namespace std;
int 
a[5],b[5],c[5],i;

int main(){
for (i=1;i<5;i++)
{
	cout<<"introduce el valor de a "<<i;
	cin>>a[i];
	cout<<"introduce el valor de b "<<i;
	cin>>b[i];	
	c[i]=a[i]+b[i];
}
for (i=0;i<5;i++)
{
	cout<<"elemento "<<i;
	cout<<c[i]<<endl;
}
return 0;
}
