#include <iostream>
using namespace std;

char nombres[4][6];
int cali[4][3];
int final[4];
float prom;
int i,c,j,suma;

int main(){
for(i=0;i<4;i++) //se ingresan el nombre de los alunmos
{
cout<<"ingresa el nombre del alumno ";
cin>>nombres[i];
}
cout<<endl<<endl;

for (c=0;c<4;c++)
{
suma=0;
for(j=0;j<3;j++) //se ingresan las calificaciones
{
cout<<"ingrese la calificacion de cada alumno "<<c<<" "<<j<<" : ";
cin>>cali[c][j];
suma=suma+cali[c][j];

}
final[c]=suma;
}
cout<<endl<<endl;

//for(i=0;i<4;i++) //se dan las calificaciones
//{
for (c=0;c<4;c++)
{
prom=final[c]/3.;
cout<<"el promedio de "<<nombres[c]<<" es "<<prom<<"\n";
}

cout<<endl;
//}

return 0;
}
