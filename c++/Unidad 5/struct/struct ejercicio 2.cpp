#include <iostream>				//ejercicio 2
using namespace std;
struct info
{
int cedula;
char nombre[10];
char apellido[20];
int edad;
char profe[20];
char naci[30];
char dire[20];
int tel;
};
int i;
info*per=new info[7];
int main(){
for (i=0;i<7;i++)
{
	cout<<"persona "<<i+1<<endl;
	cout<<"ingresa la cedula: ";
	cin>>per[i].cedula;
	cout<<"ingresa su nombre: ";
	cin>>per[i].nombre;
	cout<<"ingresa su apellido: ";
	cin>>per[i].apellido;
	cout<<"ingresa la edad: ";
	cin>>per[i].edad;
	cout<<"ingresa su profeción: ";
	cin>>per[i].profe;
	cout<<"ingresa su lugar de nacimiento: ";
	cin>>per[i].naci;
	cout<<"ingresa su direccion: ";
	cin>>per[i].dire;
	cout<<"ingresa su telefono: ";
	cin>>per[i].tel;
	cout<<endl;
}
cout<<endl;
for (i=0;i<7;i++)
{
	cout<<"cedula: "<<per[i].cedula<<endl;
	cout<<"nombre: "<<per[i].nombre<<endl;
	cout<<"apellido"<<per[i].apellido<<endl;
	cout<<"edad: "<<per[i].edad<<endl;
	cout<<"profeción: "<<per[i].profe<<endl;
	cout<<"lugar de nacimiento: "<<per[i].naci<<endl;
	cout<<"direccion: "<<per[i].dire<<endl;
	cout<<"telefono: "<<per[i].tel<<endl;
	cout<<endl;
}	
	return 0;
}
