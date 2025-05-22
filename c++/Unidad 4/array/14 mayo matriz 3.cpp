#include <iostream>				//ejercicio 2

using namespace std;
	int mat[4][4];
	int i,j,suma;
		
int main (){
	for (i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
		{
		cout<<"introduce un numero "<<i<<" "<<j<<" : ";
		cin>>mat[i][j];	
		}
	}
	
	for (i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
		{
			if ((mat[i][j]%2==0))
			{
			cout<<mat[i][j]<<" ";
			suma=suma+mat[i][j];
			}
		}
	cout<<endl;
	}
	cout<<"la suma de los pares es "<<suma;
	return 0;
}
