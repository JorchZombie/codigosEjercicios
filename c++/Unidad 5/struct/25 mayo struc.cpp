#include <iostream>
using namespace std;
int i;
struct compas
{
 char nombre[30];
 char apellido [30];
 int edad;
 char sexo [10];
 char direccion [40];
 int telefono;
};

int main (){
 compas*amigos= new compas[5];	
	for (i=0;i<5;i++)
	{
	cout<<"ingrese el nombre de su compa ";
	cin>>amigos[i].nombre;
	cout<<"ingresa el apellido ";
	cin>>amigos[i].apellido;
	cout<<"ingresa su sexo ";
	cin>>amigos[i].sexo;
	cout<<"ingresa la edad ";
	cin>>amigos[i].edad;
	cout<<"ingresa su direccion ";
	cin>>amigos[i].direccion;
	cout<<"ingresa su telefono ";
	cin>>amigos[i].telefono;
	cout<<endl;
	}
	
	for (i=0;i<5;i++)
	{
	cout<<"el nombre de su compa "<<amigos[i].nombre<<endl;
	cout<<"el apellido "<<amigos[i].apellido<<endl;
	cout<<"su sexo "<<amigos[i].sexo<<endl;
	cout<<"la edad "<<amigos[i].edad<<endl;
	cout<<"su direccion "<<amigos[i].direccion<<endl;
	cout<<"su telefono  "<<amigos[i].telefono<<endl;
	cout<<endl;
	}
		
	return 0;
}
