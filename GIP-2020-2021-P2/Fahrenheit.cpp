#include<iostream>
using namespace std;

int main()
{
	double celcius;
	double Fahrenheit;

	cout << "Bitte geben Sie die Temperatur in Grad Celcius ein: ? ";
	cin >> celcius;

	Fahrenheit = celcius * 1.8 + 32;

	cout << "Die Temperatur in Fahrenheit lautet: " << Fahrenheit << endl;

	system("PAUSE");

	return 0;
}
