#include <iostream>				//ejercico 3
#include <string.h>
using namespace std;

char mat1[10][10],mat2[10][10];
char letra1[10],letra2[10];
int i,j,ale;

int main(){
	for (i=0;i<4;i++)
	{
	letra1[i]=0;	
		for (j=0;j<4;j++)
		{
		cout<<"ingresa una letra ";
		cin>>mat1[i][j];
		}
	letra1[i]=mat1[i][j];	
	}
cout<<endl;
		for (i=0;i<4;i++)
	{
	letra2[i]=0;
		for (j=0;j<4;j++)
		{
		cout<<"ingresa una segunda letra ";
		cin>>mat2[i][j];
		}
	letra2[i]=mat2[i][j];	
	}
	if (strcmp(letra1,letra2)==0)
	{
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
		cout<<mat1[i][j]<<" ";
		cout<<endl;
		cout<<mat2[i][j]<<" ";
			}
		}
		cout<<endl;	
	}
	
	return 0;
}
