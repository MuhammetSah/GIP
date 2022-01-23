#include <iostream>
#include <string>
#include <fstream>
#include "person.h"
#include "texte.h";
using namespace std;

//Listenzeile abschlieﬂen (hilfsfunktion)
string br(string s)
{
	string done = s + "<br/>";
	return done;
}

//Fettdruck (hilfsfunktion)
string b(string s)
{
	string done2 = "<b>" + s + "</b>";
	return done2;
}


int main()
{
	//string eingabezeile;
	Person new_person;

	ifstream lesen("personendaten.txt");

	string eingabezeile = "", kurztext = "", langtext = "";

	//solange .txt gelesen wird. erstelle die geforderten Kurz-/Langtexte
	while (getline(lesen, eingabezeile)) {


		Person new_person = extrahiere_person(eingabezeile);
		
		// kurztext erstellen ... vorgegeben
		kurztext += br(
			b(new_person.nachname) + ", " + new_person.vorname
		) + "\n";
		// langtext erstellen ... vorgegeben
		langtext += br(
			b(new_person.vorname + " " + new_person.nachname) +
			", " +
			new_person.geburtsdatum
		) + "\n";
	}
	lesen.close();

	ifstream templatedatei("webseite.html.tmpl");
	ofstream ausgabedatei("webseite.html");

	while (getline(templatedatei, eingabezeile)) {
		eingabezeile = ersetze(eingabezeile, '%', kurztext);
		eingabezeile = ersetze(eingabezeile, '$', langtext);
		//eingabezeile + "\n";
		ausgabedatei << eingabezeile + "\n";
	}
	templatedatei.close();
	ausgabedatei.close();

	system("pause");
	return 0;
}