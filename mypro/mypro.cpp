// mypro.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h" 
#include <iostream> 
using namespace std; 

int _tmain(int argc, _TCHAR* argv[])
{
	int a, b, c, input; 

	cout << "Vvedite pervoe chislo:"; 
	cin >> a; 
	cout << "Vvedite vtoroe chislo:"; 
	cin >> b; 

	c = a + b; 
	cout << "Otvet:" << c << endl; 

	system("pause"); 

	return 0;
}

