#include <iostream>
#include <string>
using namespace std;
#define CATCH_CONFIG_RUNNER
#include "catch.h"
#include "liste.h"
int main()
{
	Catch::Session().run();
	const int laenge = 10;
	TListenKnoten* anker = nullptr;

	cout << liste_als_string(anker) << endl;
	cout << liste_als_string_rueckwaerts(anker) << endl;

	for (int i = 0; i < laenge; i++)

		hinten_anfuegen(anker, i * i);

	cout << liste_als_string(anker) << endl;
	cout << liste_als_string_rueckwaerts(anker) << endl;

	// neu Aufgabe INF-07.03
	in_liste_einfuegen(anker, 11, 0);
	cout << liste_als_string(anker) << endl; 
	cout << liste_als_string_rueckwaerts(anker) << endl;
	in_liste_einfuegen(anker, 22, 25);
	cout << liste_als_string(anker) << endl;
	cout << liste_als_string_rueckwaerts(anker) << endl;
	in_liste_einfuegen(anker, 33, 81); 
	cout << liste_als_string(anker) << endl;
	cout << liste_als_string_rueckwaerts(anker) << endl;
	in_liste_einfuegen(anker, 44, 99); 
	cout << liste_als_string(anker) << endl;
	cout << liste_als_string_rueckwaerts(anker) << endl;

	//Aufgabe INF-07.04
	aus_liste_loeschen(anker, 11); // neu
	cout << liste_als_string(anker) << endl; // neu
	cout << liste_als_string_rueckwaerts(anker) << endl; // neu
	aus_liste_loeschen(anker, 22); // neu
	cout << liste_als_string(anker) << endl; // neu
	cout << liste_als_string_rueckwaerts(anker) << endl; // neu
	aus_liste_loeschen(anker, 33); // neu
	cout << liste_als_string(anker) << endl; // neu
	cout << liste_als_string_rueckwaerts(anker) << endl; // neu
	aus_liste_loeschen(anker, 44); // neu
	cout << liste_als_string(anker) << endl; // neu
	cout << liste_als_string_rueckwaerts(anker) << endl; // neu
	
	system("PAUSE");
	return 0;
}