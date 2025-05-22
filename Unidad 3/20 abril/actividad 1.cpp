#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
	char contra[]= "777",pass[5];
	cout<<"Hola ingresa la contraseña por favor"<<endl;
	cin>>pass;
	if ((strcmp (contra,pass)==0)){
	cout<<"Bienvenido";	
	}
	else 
	cout<<"usuario incorrecto";	 
	return 0;
}

