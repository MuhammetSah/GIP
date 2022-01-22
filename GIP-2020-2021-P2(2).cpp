#include<iostream>
using namespace std;


int main()
{
	double Fuß;
	double Meter;

	cout << "Bitte geben Sie die Laenge in Metern ein: ? ";
	cin >> Meter;

	Fuß = Meter * 3.2808;

	cout << "Die Laenge in Fuss lautet: " << Fuß << endl;

	system("PAUSE");

	return 0;
}
