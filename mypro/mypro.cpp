// mypro.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h" 
#include <iostream> 
using namespace std; 

int _tmain(int argc, _TCHAR* argv[])
{
	int a, b, c, input; 

	printf( "Vyberite deistvie?\n" ); 
	printf( "1. +\n" ); 
	printf( "2. -\n" );
	printf( "3. *\n" ); 

	printf( "Vash vybor: " ); 
	scanf("%d", &input ); 

	cout << "Vvedite pervoe chislo:"; 
	cin >> a; 
	cout << "Vvedite vtoroe chislo:"; 
	cin >> b; 

	switch ( input ) { 
		case 1: 
			c = a + b; 
			cout << "Otvet:"<< c << endl; 
			break; 
		case 2: 
			c = a - b; 
			cout << "Otvet:" << c << endl; 
			break; 
		case 3: 
			c = a * b; 
			cout << "Otvet:" << c << endl; 
			break; 
	}

	system("pause"); 

	return 0;
}

