#include <iostream>
#include <string.h>
using namespace std;
string esta[3],cap[3];
string n;
int main(int argc, char *argv[]){
	for (int i=0;i<3;i++)
	{
	cout<<"escribe una capital";
	cin>>esta[i];	
	cout<<endl;
	cout<<"escribe un estado";	
	cin>>cap[i];	
	}
	cout<<"escribe un estado o capital";
	cin>>n;
	cout<<endl;
for (i=0;i<3;i++){
	if (strcmp(n,esta[i])==0)
	cout<<"su capital es "<<cap[i];
	if (strcmp(n.cap[i])==0)
	cout<<"su estado es "<<esta[i];
}
return 0;	
}
