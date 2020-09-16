/*
 * dodaj_liczby.cxx
 * 
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	// int liczba1; // deklaracja zmiennej całkowitej
	// int liczba2;
	float a;
	float b;
	a=0;//inicjacja zmiennej
	b=0;
	cout <<"Podaj pierwszą liczbę: "<<endl;
	cin >> a;
	cout<<"Podaj drugą liczbę: "<< endl;
	cin >> b;
	cout << a <<" "<< b << endl;
	cout<<"Suma: "<<a+b;
	return 0;
}

