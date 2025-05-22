#include <iostream>
using namespace std;
int
i;
struct contacto
{
int edad;
int numero;
char nombre[30];
};
contacto *Amigo = new contacto[3];
int main(int argc, char *argv[]) {
for(i=0;i<3;i++)
{
cout << "Ingrese Nombre: ";
cin >> Amigo[i].nombre;
cout << "Ingrese Edad: ";
cin >> Amigo[i].edad;
cout << "Ingrese Telefono: ";
cin >> Amigo[i].numero;
}
cout<<"Vaciando el Arreglo------------->"<<"\n";
for(i=0;i<3;i++)
{
cout << "Nombre: "<<Amigo[i].nombre;
cout << " Edad: "<<Amigo[i].edad;
cout << " Telefono: "<<Amigo[i].numero;
cout<<"\n";
}
return 0;
}

