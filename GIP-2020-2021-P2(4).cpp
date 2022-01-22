#include<iostream>
using namespace std;

int main()
{
	double eingabe;
	int auswahl;


	cout << "Ihre Eingabe: ? ";
	cin >> eingabe;


	cout << "Ihre Auswahl der Umwandlung:\n";
	cout <<	" 1- Celcius in Fahrenheit\n";
	cout << " 2 - Meter in Fuss\n";
	cout << " 3- Euro in US Dollar\n";
	cin >> auswahl;


	cout << "Das Ergebnis lautet: " << ((eingabe * 1.8 + 32) * (1 / auswahl))

									 + ((eingabe * 3.2808) * ((auswahl / 2) - (auswahl / 3)))

									+ ((eingabe * 1.2957) * (auswahl / 3)) << endl;



	system("PAUSE");

	return 0;
}