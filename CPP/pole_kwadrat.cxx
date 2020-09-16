/*
 * pole_kwadrat.cxx
 * 
 */


#include <iostream>
using namespace std;


int main(int argc, char **argv)
{
	float a;

	cout<< "Podaj bok kwadratu: "<<endl;
	cin>> a;
	cout<< "Obwód kwadratu wynosi: "<<a*4<<endl;
	cout<< "Pole kwadratu wynosi: "<<a*a<<endl;
	
	return 0;
}

