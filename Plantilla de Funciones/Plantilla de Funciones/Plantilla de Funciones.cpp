// Plantilla de Funciones.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
/*
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
*/
template <class T> T min (T a, T b)
{
	if(a <= b)
		return a;
	else
		return b;
}

int main()
{
	int ea = 1, eb = 5;
	cout << "(int): " << min(ea, eb) << endl;

	long la = 10000, lb = 4000;
	cout << "(long): " << min(la, lb) << endl;

	double da = 423.654, db = 789.10;
	cout << "(double): " << min(da, db) << endl;
	return 0;
}

