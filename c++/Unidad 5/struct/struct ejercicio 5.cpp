#include <iostream>			//ejercicio 5
using namespace std;
struct pelis
{
char nombre [30];
int longi;
int precio;
int dia;
char mes[15];
char clafi[5];
};

int i,n;

pelis*info=new pelis;
	
int main(int argc, char *argv[]) {
	cout<<"ingresa el numero de peliculas: ";
	cin>>n;
	cout<<endl;
	for (i=0;i<n;i++)
	{

		cout<<"pelicula "<<i+1<<endl;
		cout<<"ingrese el nombre de la pelicula: ";
		cin>>info[i].nombre;
		cout<<"ingrese la duracion de la pelicula (en minutos): ";
		cin>>info[i].longi;
		cout<<"ingresa el precio: ";
		cin>>info[i].precio;
		cout<<"ingresa la fecha que se vendio: ";
		cin>>info[i].dia;
		cout<<"ingresa el mes que se vendio: ";
		cin>>info[i].mes;
		cout<<"ingresa la clasificacion de la cinta: ";
		cin>>info[i].clafi;
		cout<<endl;
	}
	cout<<endl;
	for (i=0;i<n;i++)
	{

		cout<<"pelicula "<<i+1<<endl;
		cout<<"nombre de la pelicula: "<<info[i].nombre<<endl;
		cout<<"duracion de la pelicula (en minutos): "<<info[i].longi<<endl;
		cout<<"el precio: "<<info[i].precio<<endl;
		cout<<"la fecha que se vendio: "<<info[i].dia<<endl;
		cout<<"el mes que se vendio: "<<info[i].mes<<endl;
		cout<<"clasificacion de la cinta: "<<info[i].clafi<<endl;
		cout<<endl;
	}
	return 0;
}
