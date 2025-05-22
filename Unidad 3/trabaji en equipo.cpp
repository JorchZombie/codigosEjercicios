#include <iostream>
#include <time.h>
using namespace std;
	int x,n,c,cont,num;
int main(int argc, char *argv[]) {
	cout<<"                      M E N U"<<endl<<endl;
	cout<<"1.- Adivina el Numero"<<endl;	
	cout<<"2.- Boletos de la rifa"<<endl;
	cout<<"elege uno por favor ";
	cin>>x;	
	switch (x)
	{
	case 1:{
		srand(time(NULL));
		for(int n=1; n<=1; n++)
		{
			num=1 + rand() % (100);
		}
		cout<<"Se te genero un numero random, !ES HORA DE ADIVINAR!"<<endl;
		do{
			
			cout<<"Dame un numero: "<<endl;
			cin>>n;
			if(n>num){
				cout<<"Debe ser menor"<<endl;}
			if(n<num){
				cout<<"Debe ser mayor"<<endl;}
			cont++;
		}while(n != num);
		cout<<"\nFelicidades adivinaste en "<<cont<< " intentos"<<endl;
		
		break;}
	case 2:
	{			
		srand(time(NULL));
		cout<<"ingresa el numero de estudiantes ";
		cont=1;	
		cin>>n;
		while (cont<=n)
		{
		cout<<"estudiante "<<cont<<"\n";
		c=rand()%50;
		cout<<"tu numero es "<<c<<" y tu premio sera ";
			if (c > 40){
			cout<<" $350 pesos"<<endl;
			}
			else{
			if(c < 10){
				cout<<"de $50 pesos"<<endl;
			}
			else {
					
					if ((c>=10)||(c<=40));{
					cout<<"de $200 pesos"<<endl;}
			}
			}
		cont=cont+1;
		}
	}	
	break;}
	return 0;
}

