// Datei: wortspiegel_main.cpp

#define CATCH_CONFIG_RUNNER
#include "catch.h"

#include <iostream>
#include <string>
using namespace std;

#include "wortfunktionen.h"
#include "bildschirm.h"

int main()
{
	// Aufruf der Unit Tests ...
	Catch::Session().run();

	// Ab hier ihr Code ...
	string eingabeText;
	char auswahlChar;
	int currentPosition = 0;

	cout << "Bitte geben Sie den Text ein: ? ";
	getline(cin, eingabeText);
	ausgabe(eingabeText, 0);

	while (true)
	{
		auswahlChar = eingabe();
		if (auswahlChar == 'q')
		{
			break;
		}
		else if (auswahlChar == 'l')
		{
			if (currentPosition != 0)
			{
				currentPosition -= 1;
				ausgabe(eingabeText, currentPosition);
			}
			else
			{
				ausgabe(eingabeText, currentPosition);
			}
		}
		else if (auswahlChar == 'r')
		{
			if (currentPosition != eingabeText.length() - 1)
			{
				currentPosition += 1;
				ausgabe(eingabeText, currentPosition);
			}
			else
			{
				ausgabe(eingabeText, currentPosition);
			}
		}
		else if (auswahlChar == 's')
		{

			wortspiegel(eingabeText, currentPosition);
			ausgabe(eingabeText, currentPosition);

		}
	}

	system("PAUSE");
	return 0;
}
