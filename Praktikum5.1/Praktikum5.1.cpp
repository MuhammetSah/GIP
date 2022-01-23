#include<iostream>
#include <string>
using namespace std;

int main()
{
	//array[4]= 0,1,2,3,4 initialiesiert als 1,2,3,4,5
	int array[5];
	
	

	// Ausgabe für die Eingabe
	for (int i = 0; i < 5; i++)
	{
		do {
			cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
			cin >> array[i];
		} while (array[i] < 1 || array[i] > 9);
	}

	//Y-Achse mit beschriftung von 9-1
	for (int y = 9; y > 0; y--)
	{
		cout << y;

		//Ausgabe für jede Möglichkeit
		for (int j = 0; j < 5; j++)
		{
			if (y < array[j])
			{
				cout << "+";
			}
			if (y == array[j])
			{
				cout << "*";
			}
			if (y > array[j])
			{
				cout << ".";
			}
		}
		cout << endl;
	}

	cout << " 12345" << endl;

	system("PAUSE");
	return 0;
}