#include<iostream>
using namespace std;

int main()
{
	double Dollar;
	double Euro;

	cout << "Bitte geben Sie die Geldmenge in Euro ein: ? ";
	cin >> Euro;

	Dollar = Euro * 1.2957;

	cout << "Die Geldmenge in US Dollar lautet: " << Dollar << endl;

	system("PAUSE");


	return 0;
}