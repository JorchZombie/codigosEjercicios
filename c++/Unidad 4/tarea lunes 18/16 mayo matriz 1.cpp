#include <iostream>						//ejercicio 1
#include <stdlib.h>
#include <time.h>
using namespace std;
int mat[10][10];
int columnas,filas,suma1,suma2,ale,i,j;
int vfilas[4],vcolu[4];

int main (){
cout<<"ingresa el numero de filas ";		
cin>>filas;
cout<<"ingresa el numero de columnas ";
cin>>columnas;
srand(time(NULL));
for (i=0;i<filas;i++)
{
suma1=0;
suma2=0;
	for (j=0;j<columnas;j++)
	{
		ale=rand()%10;
		mat[i][j]=ale;
		suma1=suma1+mat[i][j];
		suma2=suma2+mat[i][j];
	}
vfilas[i]=suma1;
vcolu[j]=suma2;	
}
if((vfilas[i]==vcolu[j]))
{
	
	for (i=0;i<filas;i++)
	{
		for (j=0;j<columnas;j++)
		{
			cout<<mat[i][j]<<" "; 
	
		}
	cout<<"  suma de las filas es"<<vfilas[i]<<"  suma de las columnas "<<vcolu[j]<<endl;;
	}
}
else 
	for (i=0;i<filas;i++)
	{
		for (j=0;j<columnas;j++)
		{
			cout<<mat[i][j]<<" "; 
	
		}
		cout<<endl;
	}

	return 0;
}
