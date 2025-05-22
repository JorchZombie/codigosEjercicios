#include <iostream>					//ejercicio 7
using namespace std;
	struct inventario
{
int nreferencia;
char titulo[50];
char autor[50];
char editorial[50];
char clase [50];
int nedicion;
int nano;
char revista[50];	
};
	int x,i,n;
	string resp;
	inventario*info= new inventario;
int main(int argc, char *argv[]) {

	cout<<"		que vas a capturar hoy	"<<endl;
do{
	cout<<"1.- Libros"<<endl;
	cout<<"2.- Revistas"<<endl;
	cout<<"selecciona una opcion: ";
	cin>>x;
	cout<<endl;	
	switch (x)
	{
	case 1:		//libros
		{
		cout<<"ingresa el numero de libros a capturar: ";
		cin>>n;	
		cout<<endl;
		for (i=0;i<n;i++)
			{
			cout<<"libro "<<i+1<<endl;
			cout<<"ingrese el numero de referencia: ";
			cin>>info[i].nreferencia;
			cout<<"ingrese el titulo: ";
			cin>>info[i].titulo;
			cout<<"ingrese el nombre del autor: ";
			cin>>info[i].autor;
			cout<<"ingrese la editorial: ";
			cin>>info[i].editorial;
			cout<<"ingrese la clase de la publicacion: ";
			cin>>info[i].clase;
			cout<<"ingrese el numero de edicion: ";
			cin>>info[i].nedicion;
			cout<<"ingrese el ano de publicacion: ";
			cin>>info[i].nano;
			cout<<endl;
			}
		cout<<endl<<endl;
			for (i=0;i<n;i++)
			{
			cout<<"libro "<<i+1<<endl;
			cout<<"numero de referencia: "<<info[i].nreferencia<<endl;
			cout<<"titulo: "<<info[i].titulo<<endl;
			cout<<"nombre del autor: "<<info[i].autor<<endl;
			cout<<"editorial: "<<info[i].editorial<<endl;
			cout<<"clase de la publicacion: "<<info[i].clase<<endl;
			cout<<"numero de edicion: "<<info[i].nedicion<<endl;
			cout<<"ano de publicacion: "<<info[i].nano<<endl;
			cout<<endl;
			}
		break;
		}
		
	case 2:				//revistas
		{
		cout<<"ingresa el numero de revistas a capturar: ";
		cin>>n;	
		cout<<endl;
		for (i=0;i<n;i++)
			{
			cout<<"revista "<<i+1<<endl;
			cout<<"ingrese el numero de referencia: ";
			cin>>info[i].nreferencia;
			cout<<"ingrese el titulo: ";
			cin>>info[i].titulo;
			cout<<"ingrese el nombre del autor: ";
			cin>>info[i].autor;
			cout<<"ingrese la editorial: ";
			cin>>info[i].editorial;
			cout<<"ingrese la clase de la publicacion: ";
			cin>>info[i].clase;
			cout<<"ingrese el nombre de la revista: ";
			cin>>info[i].revista;
			cout<<endl;
			}
		cout<<endl<<endl;
			for (i=0;i<n;i++)
			{
			cout<<"revista "<<i+1<<endl;
			cout<<"numero de referencia: "<<info[i].nreferencia<<endl;
			cout<<"titulo: "<<info[i].titulo<<endl;
			cout<<"nombre del autor: "<<info[i].autor<<endl;
			cout<<"editorial: "<<info[i].editorial<<endl;
			cout<<"clase de la publicacion: "<<info[i].clase<<endl;
			cout<<"ingrese el nombre de la revista: "<<info[i].revista<<endl;
			cout<<endl;
			}
		break;
		}
	};
	cout<<"¿desea volver a capturar? ";
	cin>>resp;
	cout<<endl;
	}while('si');
	return 0;
}
