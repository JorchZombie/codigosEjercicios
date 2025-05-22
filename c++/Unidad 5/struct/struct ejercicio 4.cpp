#include <iostream>			//ejercicio 4
using namespace std;
struct alumnos
{
float cali1,cali2,cali3;
};

char materia[20];
int cont1=0,cont2=0,i,n;
float prom,buen,mal;

alumnos*alum=new alumnos;
	
int main(int argc, char *argv[]) {
	cout<<"ingresa el numero de alumnos: ";
	cin>>n;
	cout<<"ingrese en nombre de la materia: ";
	cin>>materia;
	cout<<endl;
	for (i=0;i<n;i++)
	{

		cout<<"alumno "<<i+1<<endl;
		cout<<"ingrese la calificacion 1: ";
		cin>>alum[i].cali1;
		cout<<"ingrese la calificacion 2: ";
		cin>>alum[i].cali2;
		cout<<"ingrese la calificacion 3: ";
		cin>>alum[i].cali3;
		cout<<endl;
	}
	cout<<endl;
	for (i=0;i<n;i++)
	{
	prom=(alum[i].cali1+alum[i].cali2+alum[i].cali3)/3;
		if (prom>=7)
		{
			cont1++;
		}
		else
		{
			cont2++;
		}
	buen=100/cont1;
	mal=100/cont2;	
	}
	cout<<"el porcentaje de los aprobados es "<<"% "<<buen<<endl;
	cout<<"el porcentaje de los reprobados es "<<"% "<<mal;
	return 0;
}

