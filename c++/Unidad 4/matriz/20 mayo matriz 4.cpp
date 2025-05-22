#include <iostream>
using namespace std;

int mat1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
int mat2[3][3];
int i,j,n;

int main (){
	for (i=0;i<3;i++)	//matrids normal
	{
		for (j=0;j<3;j++)
		{
		cout<<mat1[i][j]<<" ";	
		}
	cout<<endl;	
	}
	cout<<endl<<endl;
	
	for(n=0;n<3;n++)	//se empieza el ciclo
	{
		cout<<"vuelta "<<n; 
		cout<<endl;
		for (i=0;i<3;i++)
		{
			for (j=0;j<3;j++)
			{	
			cout<<"ingresa un numero ";
			cin>>mat2[i][j];	
			}	
		}
		cout<<"\n";
	}
	cout<<endl<<endl;

	for(n=0;n<3;n++)		//se imprimen las matrices 3 veces
	{
		for (i=0;i<3;i++)
		{
			for (j=0;j<3;j++)
			{	
			cout<<mat2[i][j]<<" ";	
			}
		cout<<endl;	
		}
		cout<<"\n";
	}
	return 0;
}
