#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(int argc, char *argv[]) {
	
	char palabra1[] = "Hola";
	char palabra2[] = "Hola";
	
	if(strcmp(palabra1,palabra2) == 0){ 
	cout<<"ambas cadenas son iguales";
	}
	getch();
	return 0;
}

