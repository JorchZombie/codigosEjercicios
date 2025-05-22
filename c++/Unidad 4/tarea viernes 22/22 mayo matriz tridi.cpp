#include <iostream>
using namespace std;

int mat[4][4][4];
int i,j,k,cont=1,suma;

int main(){
	
do {
	for(i=0;i<3;i++)
	{
	cout<<"vuelta "<<i;	
	cout<<endl;	
		for(j=0;j<2;j++)
		{
			for (k=0;k<2;k++)
			{
			cout<<"intreoduce un numero ";
			cin>>mat[i][j][k];
			suma=suma+mat[i][j][k];	
			}
		}
		cout<<endl;			
	}
cont++;
}while (cont<4);
//se muestra la matriz
	for(i=0;i<5;i++)
	{	
		for(j=0;j<2;j++)
		{	
			for (k=0;k<2;k++)
			{
			cout<<mat[i][j][k]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;	
	}
	cout<<"la suma acumulada es de "<<suma;
	return 0;
}
