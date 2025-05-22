#include<iostream>

using namespace std;

struct tienda{
char nombre [40];
int edad;
int sueldo;
char departa[20];
};	
	
struct nacimiento{
char mes[15];
int dia;
int anio;
};	

int i;

tienda*info1=new tienda [5];
nacimiento*info2=new nacimiento[5];

int main (){
for (i=0;i<5;i++)			//se ingresan los datos
{
cout<<"persona "<<i+1<<endl;	
cout<<"ingresa el nombre: ";
cin>>info1[i].nombre;
cout<<"ingresa la edad: ";
cin>>info1[i].edad;
cout<<"ingresa su suledo: ";
cin>>info1[i].sueldo;
cout<<"ingresa el departamento: ";
cin>>info1[i].departa;
cout<<"ingresa el mes: ";
cin>>info2[i].mes;
cout<<"ingresa el dia: ";
cin>>info2[i].dia;
cout<<"ingresa el anio: ";
cin>>info2[i].anio;
cout<<endl;
}	
cout<<endl;
for (i=0;i<5;i++)			//se imprimen
{
cout<<"persona "<<i+1<<endl;	
cout<<"nombre: "<<info1[i].nombre<<endl;;
cout<<"edad: "<<info1[i].edad<<endl;;
cout<<"suledo: "<<info1[i].sueldo<<endl;;
cout<<"departamento: "<<info1[i].departa<<endl;;
cout<<"mes: "<<info2[i].mes<<endl;;
cout<<"dia: "<<info2[i].dia<<endl;;
cout<<"el anio: "<<info2[i].anio<<endl;;
cout<<endl;
}
	
	return 0;
}
