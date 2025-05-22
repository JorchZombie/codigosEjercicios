#include <iostream>
using namespace std;
int matriz[30][40];
int fila,i,j,colu;
int main (){
	cout<<"numero de filas ";
	cin>>fila;
	cout<<"numero de columnas ";
	cin>>colu;
	for (i=0;i<fila;i++)
	{
		for(j=0;j<colu;j++) {
		
		cout<<"introduce un numero "<<i<<" "<<j<<" : ";
		;
		cin>>matriz[i][j];}
	}
	
	for (i=0;i<fila;i++)
	{
		for (j=0;j<colu;j++)
		{	
		cout<<matriz[i][j]<<" ";
		}
	cout<<endl;
	}
	return 0;
}
