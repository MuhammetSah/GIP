#include <string>
#include "bildschirm.h"
#include <iostream>
using namespace std;

void ausgabe(string text, int pos)
{
	cout << text << endl;
	for (int i = 0; i < pos; i++) {
		cout << " ";
	}
	cout << "*" << endl;
}

char eingabe()
{
	char auswahlChar;
	cout << "Befehl (l: links, r: rechts, s: spiegeln, q: Ende) ?- ";
	cin >> auswahlChar;
	cout << endl;
	return auswahlChar;
}