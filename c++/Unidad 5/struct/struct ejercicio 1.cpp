#include <iostream>			//ejercicio 1
using namespace std;
	struct personas
{
		char nombre[10];
		char dire[10];
		int edad;
		int tel;
	};
	int x,i;
	string resp;
	personas*info= new personas[5];
int main(int argc, char *argv[]) {
do{
	cout<<"			menu				"<<endl<<endl;
	cout<<"1.- mostrar la lista de todos los nombres con su direccion y telefono"<<endl;
	cout<<"2.- mostrar las personas menores de 24 años"<<endl;
	cout<<"selecciona una opcion: ";
	cin>>x;
	cout<<endl;	
	switch (x)
	{
	case 1:
		{
		for (i=0;i<5;i++)
			{
			cout<<"ingrese el nombre: ";
			cin>>info[i].nombre;
			cout<<"ingrese su dirccion: ";
			cin>>info[i].dire;
			cout<<"ingrese su numero de telefono: ";
			cin>>info[i].tel;
			cout<<"ingrese su edad: ";
			cin>>info[i].edad;
			cout<<endl;
			}
		cout<<endl<<endl;
		for (i=0;i<5;i++)
			{
			cout<<"nombre: "<<info[i].nombre<<endl;
			cout<<"dirccion: "<<info[i].dire<<endl;
			cout<<"telefono: "<<info[i].tel<<endl;
			cout<<"edad: "<<info[i].edad<<endl;
			cout<<endl;
			}
		break;
		}
		
	case 2:
		{
			for (i=0;i<5;i++)
			{
				cout<<"ingrese el nombre: ";
				cin>>info[i].nombre;
				cout<<"ingrese su dirccion: ";
				cin>>info[i].dire;
				cout<<"ingrese su numero de telefono: ";
				cin>>info[i].tel;
				cout<<"ingrese su edad: ";
				cin>>info[i].edad;
				cout<<endl;
			}
			cout<<endl<<endl;
			for (i=0;i<5;i++)
			{
			if(info[i].edad<24)
				{
				cout<<"nombre: "<<info[i].nombre<<endl;
				cout<<"dirccion: "<<info[i].dire<<endl;
				cout<<"telefono: "<<info[i].tel<<endl;
				cout<<"edad: "<<info[i].edad<<endl;
				cout<<endl;
				}
			}
			break;
		}
	};
	cout<<"¿desea volverlo a intentar?";
	cin>>resp;
	cout<<endl;
	}while('si');
	return 0;
}

