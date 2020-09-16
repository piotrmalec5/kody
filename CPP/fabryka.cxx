/*
 * fabryka.cxx

 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int sw;
	float p;
	sw=0;
	p=0;
	cout << "Podaj ilość wszystkich produkowanych samochodów: " << endl;
	cin >> sw;
	cout << "Podaj procent produkowanych samochodów dostawczych"<<endl;
	cin >> p;
	int so=(p*sw)/100;
	cout <<"Liczba samochodów osobowych to: "<<so;
	
	
	return 0;
}

