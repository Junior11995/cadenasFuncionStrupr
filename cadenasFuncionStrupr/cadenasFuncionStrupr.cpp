/*
* Convertir dos cadenas de mayusculas a minusculas
* Compararlas y decir si son iguales o no
*/
#include<iostream>
#include<cstring>
#include<conio.h>

using namespace std;

int main() {

	char cad1[] = "primera";
	char cad2[] = "segunda";

	strupr(cad1);

	cout << cad1 << endl;


	_getch();
	return 0;
}