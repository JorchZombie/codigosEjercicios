#include <iostream>
using namespace std;
 int mat[4][4],i,j,suma=0;

int main(){
	
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
		if (i==j)
			suma=suma+mat[i][j];
		}
		cout<<endl;
	}
	cout<<"la suma acumulada de la primera fila es "<<suma;
	
	return 0;
}

