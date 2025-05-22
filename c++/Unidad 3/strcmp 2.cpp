#include <iostream>
#include <string.h>
using namespace std;
	
int main(int argc, char *argv[]) {
	char usuario[] = "jesus", pass[] = "123",nom[6], contra[6]; 
	cout<<"introduce tu usuario \n";	
	cin>>nom;	
	cout<<"introduce tu contraseña \n";	
	cin>>contra;	
	
	if((strcmp(nom,usuario)==0) && (strcmp(contra,pass)==0)){	
	cout<<"Bienvenido";}
	else	
	cout<<"Nombre de usuario o contraseña incorreto";
	
	return 0;
}

