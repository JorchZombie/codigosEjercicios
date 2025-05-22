#include <iostream>			//ejercicio 6
using namespace std;
struct estudiantes 
{
char nombre[10];
int edad;
int cali1,cali2,cali3;
int inteli;
};
int i;
estudiantes*info= new estudiantes[10];
int main (){
	
for(i=0;i<10;i++)
{
cout<<"estudiante: "<<i+1<<endl;
cout<<"ingresa el nombre: ";
cin>>info[i].nombre;
cout<<"ingresa la edad: ";
cin>>info[i].edad;
cout<<"ingresa la calidicacion 1: ";
cin>>info[i].cali1;	
cout<<"ingresa la calidicacion 2: ";
cin>>info[i].cali2;
cout<<"ingresa la calidicacion 3: ";
cin>>info[i].cali3;
cout<<"ingresa su coeficiente intelectual: ";
cin>>info[i].inteli;
cout<<endl;
}	
cout<<endl;
for(i=0;i<10;i++)
{
cout<<"estudiante: "<<i+1<<endl;
cout<<"ingresa el nombre: "<<info[i].nombre<<endl;
cout<<"ingresa la edad: "<<info[i].edad<<endl;
cout<<"ingresa la calidicacion 1: "<<info[i].cali1<<endl;
cout<<"ingresa la calidicacion 2: "<<info[i].cali2<<endl;
cout<<"ingresa la calidicacion 3: "<<info[i].cali3<<endl;
cout<<"coeficiente intelectual: "<<info[i].inteli<<endl;
cout<<endl;
}
	
	return 0;
}
