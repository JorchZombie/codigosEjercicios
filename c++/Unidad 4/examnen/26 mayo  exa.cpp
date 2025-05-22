#include <iostream>
using namespace std;

int mat[4][4];
int vec[8];
int i,j,c,par;


int main (){
	for (i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
		{
			cout<<"ingresa un numero ";
			cin>>mat[i][j];
		}	
	}
	cout<<endl;
	
	for (i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
		{
			cout<<mat[i][j]<<" ";
			
		}
	cout<<endl;	
	}
	
	cout<<endl;
	

	for (i=0;i<8;i++)
	{
		for (j=0;j<4;j++)
		{
		if (mat[i][j]%2==0)	
			par=mat[i][j];	
		}
		vec[i]=par;
		
	cout<<"vector "<<i<<" "<<vec[i];
		cout<<endl;
	}
	
	return 0;
}
