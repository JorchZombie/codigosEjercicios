#include <iostream>				//ejercicio 3
using namespace std;
struct amigos
{
	char nombre[10];
	char apellido[20];
	int edad;
	char dire[20];
	int tel;
};
int i;
amigos*per=new amigos[5];
int main(){
	for (i=0;i<5;i++)
	{
		cout<<"amigo "<<i+1<<endl;
		cout<<"ingresa su nombre: ";
		cin>>per[i].nombre;
		cout<<"ingresa su apellido: ";
		cin>>per[i].apellido;
		cout<<"ingresa la edad: ";
		cin>>per[i].edad;
		cout<<"ingresa su direccion: ";
		cin>>per[i].dire;
		cout<<"ingresa su telefono: ";
		cin>>per[i].tel;
		cout<<endl;
	}
	cout<<endl;
	cout<<"lista de amigos"<<endl;
	for (i=0;i<5;i++)
	{
		cout<<"nombre: "<<per[i].nombre<<endl;
		cout<<"apellido"<<per[i].apellido<<endl;
		cout<<"edad: "<<per[i].edad<<endl;
		cout<<"direccion: "<<per[i].dire<<endl;
		cout<<"telefono: "<<per[i].tel<<endl;
		cout<<endl;
	}	
	return 0;
}
	
