// Plantilla de Funciones.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

//datos enteros (int)
int min (int a, int b)
{
	if  (a <= b)
		return a;
	return b;
}

//datos largos (long)
long min (long a, long b)
{
	if (a <= b)
		return a;
	return b;
}

//datos double (double)
double min (double a, double b)
{
	if (a <= b)
		return a;
	return b;
}
/*
template <class T> T min (T a, T b)
{
	if(a <= b)
		return a;
	else
		return b;
}
*/
int main()
{
	
	int option;

	int ea, eb;
	long la, lb;
	double da, db;

	do{
		cout << "Seleccione el tipo de numero que desea calcular..." << endl;
		cout << "1) int " << endl;
		cout << "2) double " << endl;
		cout << "3) long " << endl;
		cout << "4) salir " << endl;

		cin >> option;

		switch (option)
		{
			case 1 : 
				cout << "Inserte el primer numero de tipo int..." << endl;
				cin>>ea;
				cout << "Inserte el segundo numero de tipo int..." << endl;
				cin>>eb;
				cout << "El numero mas chico es: " << min(ea,eb) << endl;
			break;
			case 2 : 
				cout << "Inserte el primer numero de tipo double..." << endl;
				cin>>da;
				cout << "Inserte el segundo numero de tipo double..." << endl;
				cin>>db;
				cout << "El numero mas chico es: " << min(da,db) << endl;
			break;
			case 3 : 
				cout << "Inserte el primer numero de tipo long..." << endl;
				cin>>la;
				cout << "Inserte el segundo numero de tipo long..." << endl;
				cin>>lb;
				cout << "El numero mas chico es: " << min(la,lb) << endl;
			break;

		default: if(option == 4)
					 cout<<" "<<endl;
				 else
					 cout << "ERROR"  << endl;
			break;
		}
	}while(option !=  4);
}

