#include <iostream>				//ejercicio 1
#include <stdlib.h>
#include <time.h>
using namespace std;
	int mat[4][4];
	int i,j,ale,suma;
	int hori[4];
	float prom;
		
int main (){
srand(time(NULL));
	for (i=0;i<4;i++)
	{
		suma=0;
		for (j=0;j<4;j++)
		{
		ale=rand()%50;
		mat[i][j]=ale;
		suma=suma+mat[i][j];
		}
	hori[i]=suma;
	}
	for (i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
		{
		cout<<mat[i][j]<<" ";
		}
	prom=hori[i]/4;
	cout<<" suma : "<<hori[i]<<" y su promedio : "<<prom<<endl;
	}

	return 0;
}
