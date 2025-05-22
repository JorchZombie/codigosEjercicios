#include <iostream>
#include <time.h>
using namespace std;
	int x;
	string resp;
int main(int argc, char *argv[])
{
	cout<<"             Menu"<<endl<<endl;
	cout<<"1.- Aprende a sumar"<<endl;
	cout<<"2.- Aprende a multiplicar"<<endl;
	cout<<"3.- Salir"<<endl;
	cout<<"Selecciona una opcion por favor ";
	cin>>x;
	do{
	switch (x)
{
case 1:
	{
	float porce;
	int n,resul,num1,num2,total,cont=0,mal;
	srand(time(0));
		for (n=1;n<=10;n++)
		{
			num1=rand()%20;
			num2=rand()%20;
			total=num1+num2;	
			
		cout<<"tienes que sumar "<<num1<<" mas " <<num2<<endl;
		cout<<"Ingresa el resultado ";
		cin>>resul;
			if (resul==total){
			cout<<"correcto"<<endl;
			cont=cont+1;}
			else{
			cout<<"incorrecto, el resultado era "<<total<<endl;
			mal=cont-1;}
			if(n==10){
			porce=(mal*100)/10; 
			cout<<"total de buenas es "<<cont<<endl;
			cout<<"tu porcentaje de acertado es de "<<porce<<"%"<<endl;
			}

		}
		break;
	}	
case 2:
	{
		float porce;
		int n,a,c,mult;
		cout<<"que tabla quieres estudiar ";
		cin>>a;
		for (n=0;n<=10;n++)
		{
			mult=a*n;
			cout<<"tienes que multiplicar "<<a<<" por "<<n<<endl;
			cout<<"cuanto es ";
			cin>>c;	
			if (c == mult){
				cout<<"correcto"<<endl;}
			else{
				cout<<"incorrecto, el resultado era "<<mult<<endl;}
			if (n == 10){
			cout<<"listo acabaste\n";
			}
		}
		break;
	}
}
	cout<<"quieres volver a intentarlo?";
	cin>>resp;
	}while(resp == "si");

	return 0;

}
