#include<iostream>
#include<string>
using namespace std;

int main()
{
	int pos1 = false;
	int pos2 = false;
	int sudoku[9][9] = { 0 };

	string eingabe[11] = { "" };
	string eingabezahl = "";

	cout << "Bitte geben Sie das Sudoku ein: " << endl;

	//Sudoku einlesen
	for (int i = 0; i < 11; i++)
	{
		getline(cin, eingabe[i]);
	}

	cout << endl;

	cout << "Das Sudoku lautet: " << endl;

	//Zahlenbereiche definiert 1-9 überprüfen und filtern
	for (int j = 0; j < 11; j++)
	{
		eingabezahl = eingabe[j];

		for (int p = 0; p < 22; p++)
		{
			if (eingabezahl.at(p) >= '1' && eingabezahl.at(p) <= '9')
			{
				//Zahlenwerte "lesen", sonst nur 0
				sudoku[pos1][pos2] = eingabezahl.at(p) - 48;
				pos2++;
			}
		}
	}

	for (pos1 = 0; pos1 < 9; pos1++)
	{

		for (pos2 = 0; pos2 < 9; pos2++)
		{
			//Gibt Zahlen mit ; davor wieder. Ohne cout.. = keine Zahlen und keine punkte ;
			cout << ";" << sudoku[pos1][pos2];

			//Formatierung in den zwischenbereichen(Sudoku-Muster: ;1;1;1;//;1....)
			if (pos2 == 2 || pos2 == 5)
			{
				cout << ";";
				cout << "//";
			}

			if (pos1 == 2 && pos2 == 8 || pos1 == 5 && pos2 == 8)
			{

				cout << endl;

				for (int i = 1; i < 4; i++)
				{
					//Ausgabe von = & // in jeder 4. Zeile,d.h 3 reihen vollendet, dann eine reihe = und //
					for (int j = 1; j < 8; j++)
					{
						cout << "=";
					}
					if (i == 1 || i == 2)
					{
						cout << "//";
					}
				}
			}
			//Zusammenhalt der ganzen Struktur bzw Formatierung
			if (pos2 == 8)
			{
				cout << endl;
			}
		}
	}

	system("PAUSE");
	return 0;
}


/*
.9.4.6.|.3.1.8.|.2.7.5
.1.2.3.|.7.5.6.|.9.4.8
.5.8.7.|.2.4.9.|.6.3.1
-------|-------|-------
.8.1.4.|.9.2.5.|.7.6.3
.2.7.5.|.1.6.3.|.8.9.4
.6.3.9.|.8.7.4.|.1.5.2
-------|-------|-------
.3.6.8.|.5.9.2.|.4.1.7
.4.5.1.|.6.8.7.|.3.2.9
.7.9.2.|.4.3.1.|.5.8.6



.5.1.4.|.8.6.9.|.7.2.3
.8.7.2.|.3.4.5.|.6.1.9
.9.6.3.|.2.1.7.|.5.4.8
-------|-------|-------
.6.2.8.|.1.3.4.|.9.5.7
.1.9.7.|.6.5.2.|.8.3.4
.4.3.5.|.7.9.8.|.1.6.2
-------|-------|-------
.2.4.6.|.9.7.1.|.3.8.5
.7.5.1.|.4.8.3.|.2.9.6
.3.8.9.|.5.2.6.|.4.7.1




if (pos2 == 9)
				{
					pos1 += 1;
					pos2 = 0;
				}
*/