#include <iostream>			//ejercicio 2
using namespace std;
int mat1[10][10];
int fact=1,cont=1,i,j;

int main (){
for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		fact=cont*fact;	
		cont++;
		mat1[i][j]=fact;
		}
	}
for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<mat1[i][j]<<" ";
		}
	cout<<endl;	
	}
	
	
	return 0;
}
