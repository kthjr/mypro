// mypro.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	printf( "4. /\n" ); 
	printf( "5. Vyhod\n" ); 

	printf( "Vash vybor: " ); 
	scanf("%d", &input ); 

	if (input != 5) { 

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
			case 4: 
				if (b != 0) 
				{ 
					c = a / b; 
					cout << "Otvet:" << c << endl; 
				} 
				else 
				{ 
					cout << "Division by zero." << endl; 
				} 
				break; 
			default: 
				cout << "Nepravilnyi vvod." << endl; 
		}

	}

	system("pause"); 

	return 0;
}

