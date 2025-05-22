#include <iostream>
#include <time.h>/*Se agrega esta libreria para lo del numero random*/
using namespace std;
int x,num,n,cont=0;

int main(int argc, char *argv[]) {
	cout<<"M E N U"<<endl;
	cout<<"1. Adivina el numero"<<endl;
	cout<<"Elige una opcion... ";
	cin>>x;
	
	srand(time(NULL));
	for(int n=1; n<=1; n++)/*en este for se pide la cantidad de numeros*/
	{
		num=1 + rand() % (100);/*aqui es el rango de numeros*/
		
	}
	
	switch(x)
	{
	case 1:{
		cout<<"Se te genero un numero random, !ES HORA DE ADIVINAR!"<<endl;/*aqui solo indico que ya se creo el numero*/
		do{
			
			cout<<"Dame un numero: "<<endl;
			cin>>n;
			if(n>num){
				cout<<"Debe ser menor"<<endl;}/*hago un do while para que me haga las intruciones siempre y cuando se cumplan las condiciones de los if*/
			if(n<num){
				cout<<"Debe ser mayor"<<endl;}
			cont++;/*aqui agrego un contador que se incrementa cada vez que se vuelve a pedir un numero*/
		}while(n != num);/*while hago el condicional para que se repita el proceso de los if hasta que sea igual*/
		cout<<"\nFelicidades adivinaste en "<<cont<< " intentos"<<endl;/*cuando ya no sea diferente dara este mensaje*/
	
		
		break;}
		
	
	default:cout<<"No existe la opcion";break;}
	
	
	
	
	
	return 0;
}

